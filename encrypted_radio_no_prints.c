#include "xparameters.h"
#include "xil_printf.h"
#include "xil_io.h"
#include "sleep.h"
#include "xuartlite.h"
#include "xuartlite_l.h"
#include "xuartps.h"

#define UART_DEVICE_ID  XPAR_UARTLITE_0_DEVICE_ID

XUartLite UartLite;
XUartPs Uart_Ps; // UART instance

#define AES_BASE 0x40000000

// Memory-mapped register base offsets (according to your HLS header)
#define REG_CONTROL             0x000   // Control (ap_start, ap_done, etc.)
#define REG_GIE                 0x004   // Global Interrupt Enable
#define REG_IER                 0x008   // Interrupt Enable Register
#define REG_ISR                 0x00c   // Interrupt Status Register
#define REG_MODE_CIPHER         0x010   // mode_cipher
#define REG_MODE_INVERSE        0x018   // mode_inverse_cipher
#define REG_NR                  0x030   // AES round number (Nr)

// Memory interface base addresses
#define MEM_DATA_IN_BASE        0x020   // 16 bytes (0x020–0x02F)
#define MEM_DATA_OUT_BASE       0x040   // 16 bytes (0x040–0x04F)
#define MEM_EXPANDED_KEY_BASE   0x100   // 176 bytes (0x100–0x1FF)


#define stt_lng 16
#define ExtdCipherKeyLength_max 176

unsigned char expandedKey[ExtdCipherKeyLength_max] = {
0x0, 0x1, 0x2, 0x3, 0x4, 0x5, 0x6, 0x7, 0x8, 0x9, 0xA, 0xB, 0xC, 0xD, 0xE, 0xF,
0xD6, 0xAA, 0x74, 0xFD, 0xD2, 0xAF, 0x72, 0xFA, 0xDA, 0xA6, 0x78, 0xF1, 0xD6, 0xAB, 0x76, 0xFE,
0xB6, 0x92, 0xCF, 0xB, 0x64, 0x3D, 0xBD, 0xF1, 0xBE, 0x9B, 0xC5, 0x0, 0x68, 0x30, 0xB3, 0xFE,
0xB6, 0xFF, 0x74, 0x4E, 0xD2, 0xC2, 0xC9, 0xBF, 0x6C, 0x59, 0xC, 0xBF, 0x4, 0x69, 0xBF, 0x41,
0x47, 0xF7, 0xF7, 0xBC, 0x95, 0x35, 0x3E, 0x3, 0xF9, 0x6C, 0x32, 0xBC, 0xFD, 0x5, 0x8D, 0xFD,
0x3C, 0xAA, 0xA3, 0xE8, 0xA9, 0x9F, 0x9D, 0xEB, 0x50, 0xF3, 0xAF, 0x57, 0xAD, 0xF6, 0x22, 0xAA,
0x5E, 0x39, 0xF, 0x7D, 0xF7, 0xA6, 0x92, 0x96, 0xA7, 0x55, 0x3D, 0xC1, 0xA, 0xA3, 0x1F, 0x6B,
0x14, 0xF9, 0x70, 0x1A, 0xE3, 0x5F, 0xE2, 0x8C, 0x44, 0xA, 0xDF, 0x4D, 0x4E, 0xA9, 0xC0, 0x26,
0x47, 0x43, 0x87, 0x35, 0xA4, 0x1C, 0x65, 0xB9, 0xE0, 0x16, 0xBA, 0xF4, 0xAE, 0xBF, 0x7A, 0xD2,
0x54, 0x99, 0x32, 0xD1, 0xF0, 0x85, 0x57, 0x68, 0x10, 0x93, 0xED, 0x9C, 0xBE, 0x2C, 0x97, 0x4E,
0x13, 0x11, 0x1D, 0x7F, 0xE3, 0x94, 0x4A, 0x17, 0xF3, 0x7, 0xA7, 0x8B, 0x4D, 0x2B, 0x30, 0xC5,
};

void write_buffer(u32 base, u32 offset, unsigned char* buffer, int length) {
for (int i = 0; i < length; i++) {
Xil_Out8(base + offset + i, buffer[i]);
}
}

void read_buffer(u32 base, u32 offset, unsigned char* buffer, int length) {
for (int i = 0; i < length; i++) {
buffer[i] = Xil_In8(base + offset + i);
}
}

void AES_Encrypt(u8* plaintext, u8* ciphertext, u8* key, u16 Nr) {
Xil_Out32(AES_BASE + REG_MODE_CIPHER, 1);    // Cipher mode
Xil_Out32(AES_BASE + REG_MODE_INVERSE, 0);   // Normal cipher (encryption)

write_buffer(AES_BASE, MEM_DATA_IN_BASE, plaintext, stt_lng);
write_buffer(AES_BASE, MEM_EXPANDED_KEY_BASE, key, ExtdCipherKeyLength_max);
Xil_Out16(AES_BASE + REG_NR, Nr);

Xil_Out32(AES_BASE + REG_CONTROL, 0x01);
while (!(Xil_In32(AES_BASE + REG_CONTROL) & 0x2));

read_buffer(AES_BASE, MEM_DATA_OUT_BASE, ciphertext, stt_lng);
}

void AES_Decrypt(u8* ciphertext, u8* plaintext_out, u8* key, u16 Nr) {
Xil_Out32(AES_BASE + REG_MODE_CIPHER, 1);     // Cipher mode still = 1
Xil_Out32(AES_BASE + REG_MODE_INVERSE, 1);    // Inverse cipher (decryption)

write_buffer(AES_BASE, MEM_DATA_IN_BASE, ciphertext, stt_lng);
write_buffer(AES_BASE, MEM_EXPANDED_KEY_BASE, key, ExtdCipherKeyLength_max);
Xil_Out16(AES_BASE + REG_NR, Nr);

Xil_Out32(AES_BASE + REG_CONTROL, 0x01);
while (!(Xil_In32(AES_BASE + REG_CONTROL) & 0x2));

read_buffer(AES_BASE, MEM_DATA_OUT_BASE, plaintext_out, stt_lng);
}

int init_uart_main() {
int Status;

Status = XUartLite_Initialize(&UartLite, UART_DEVICE_ID);
if (Status != XST_SUCCESS) {
xil_printf("UART initialization failed!\n");
return XST_FAILURE;
}

XUartLite_ResetFifos(&UartLite);  // Clear TX/RX buffers
return XST_SUCCESS;
}

void uart_send_block(u8* data, int length) {
for (int i = 0; i < length; i++) {
while (XUartLite_IsSending(&UartLite));  // Wait if UART is busy
XUartLite_SendByte(UartLite.RegBaseAddress, data[i]);
}

}

void uart_receive_block(u8* buffer, int length) {
for (int i = 0; i < length; i++) {

while (XUartLite_IsReceiveEmpty(UartLite.RegBaseAddress));  // Wait for a real byte
buffer[i] = XUartLite_RecvByte(UartLite.RegBaseAddress);
}
}

int receive_and_decrypt(u8* buffer, u16 Nr, u8 block_length){
u8 received_data[block_length];

if(!XUartLite_IsReceiveEmpty(UartLite.RegBaseAddress)) {  // Check if byte is received
for (int i = 0; i < block_length; i++) {
while (XUartLite_IsReceiveEmpty(UartLite.RegBaseAddress));  // Wait for a real byte
received_data[i] = XUartLite_RecvByte(UartLite.RegBaseAddress);
}
//xil_printf("Received Encrypted Data: ");
//for (int i = 0; i < 16; i++) {
//xil_printf("%c", received_data[i]);
//}
//xil_printf("\r\n");
AES_Decrypt(received_data, buffer, expandedKey, Nr);
return 1;
}

return 0;

}



int UartPs_Init(XUartPs *InstancePtr) {
    XUartPs_Config *Config;
    int Status;

    Config = XUartPs_LookupConfig(UART_DEVICE_ID);
    if (NULL == Config) return XST_FAILURE;

    Status = XUartPs_CfgInitialize(InstancePtr, Config, Config->BaseAddress);
    if (Status != XST_SUCCESS) return XST_FAILURE;

    return XST_SUCCESS;
}

int receive_serial_input(u8 *user_input, int *current_index) {
    u8 recv_buf[32];
    int return_status = 0;
    int num_bytes = XUartPs_Recv(&Uart_Ps, recv_buf, sizeof(recv_buf));

    if (num_bytes > 0) {
        for (int i = 0; i < num_bytes; i++) {
        if (recv_buf[i] == 0x0D) {
        xil_printf("\r\n");
return_status = 1;  // End of user input (e.g., line entered)
return return_status;  // You can exit early if you only want input until newline
}
            user_input[*current_index] = recv_buf[i];
            (*current_index)++;
            xil_printf("%c", recv_buf[i]);


        }
    }

    return return_status;
}




void HC_12_start_command() {
// Set to default
u8 command[5] = "AT+RX";
u8 ack[16];
xil_printf("Sending Default Command!\n");
uart_send_block(command, 5);

xil_printf("waiting for ACK:\n");

uart_receive_block(ack, 16);

xil_printf("ACK:\n");
for (int i = 0; i < 100; i++) {
xil_printf("%02x ", ack[i]);
}
}

int main() {

if (init_uart_main() != XST_SUCCESS) {
return -1;
}


if (UartPs_Init(&Uart_Ps) != XST_SUCCESS) {
xil_printf("prog uart failed\r\n");
return -1;
}


//HC_12_start_command();



u8 user_input[4096];
int user_input_index = 0;

u8 plaintext[16] = {
0x41, 0x42, 0x43, 0x44,
0x45, 0x46, 0x47, 0x48,
0x49, 0x4A, 0x4B, 0x4C,
0x4D, 0x4E, 0x4F, 0x50
};

u8 ciphertext[16];
u8 decrypted[16];
u16 Nr = 10;
int receive_status;
int counter = 0;

while(1) {

// receive data
receive_status = receive_and_decrypt(decrypted, Nr, 16);
if(receive_status == 1) {
for (int i = 0; i < 16; i++) {
xil_printf("%c", decrypted[i]);
}
xil_printf("\r\n");
}

// transmit data
if(receive_serial_input(user_input, &user_input_index) == 1) {
int num_blocks_send = (((int)(user_input_index/16))+1);
for (int i=0; i < num_blocks_send; i++) {
u8 buffer[16] = "                ";
int anti_overflow = 0;
if (i == (num_blocks_send-1)) {
anti_overflow = 16 - user_input_index % 16;
}
for (int j=0; j < (16-anti_overflow); j++) {
buffer[j] = user_input[i*16+j];
}

AES_Encrypt(buffer, ciphertext, expandedKey, Nr); // Encrypt the block

uart_send_block(ciphertext, 16); // send block over UART


//xil_printf("Plaintext Message: ");
//for (int i = 0; i < 16; i++) {
//xil_printf("%c", buffer[i]);
//}
//xil_printf("\r\n");
//
//xil_printf("Sent Encrypted Message: ");
//for (int i = 0; i < 16; i++) {
//xil_printf("%c", ciphertext[i]);
//}
//xil_printf("\r\n");

}
user_input_index = 0;
}

/*

if (counter >= 500) {
AES_Encrypt(plaintext, ciphertext, expandedKey, Nr);
uart_send_block(ciphertext, 16);
xil_printf("Encrypted Message Sent: ");
for (int i = 0; i < 16; i++) {
xil_printf("%c", plaintext[i]);
}
xil_printf("\r\n");
counter = 0;
} else { counter++; }
usleep(10000);
*/
}

/*
xil_printf("Running AES Encryption...\n");
xil_printf("Plaintext:\n");
for (int i = 0; i < 16; i++) {
xil_printf("%02x ", plaintext[i]);
}
xil_printf("\n");

// Encrypt and send
AES_Encrypt(plaintext, ciphertext, expandedKey, Nr);
uart_send_block(ciphertext, 16);
xil_printf("Encrypted block sent via UART.\n");
xil_printf("Ciphertext:\n");
for (int i = 0; i < 16; i++) {
xil_printf("%02x ", ciphertext[i]);
}

while (1) {
xil_printf("Recieving Ciphertext:\n");
// Receive and decrypt
uart_receive_block(ciphertext, 16);
xil_printf("Recieved Ciphertext:\n");
for (int i = 0; i < 16; i++) {
xil_printf("%02x ", ciphertext[i]);
}
AES_Decrypt(ciphertext, decrypted, expandedKey, Nr);
xil_printf("Received block decrypted:\n");
for (int i = 0; i < 16; i++) {
xil_printf("%02x ", decrypted[i]);
}

xil_printf("\n");
}
*/
return 0;
}