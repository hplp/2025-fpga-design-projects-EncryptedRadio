-- ==============================================================
-- Vitis HLS - High-Level Synthesis from C, C++ and OpenCL v2021.2 (64-bit)
-- Copyright 1986-2021 Xilinx, Inc. All Rights Reserved.
-- ==============================================================
library ieee; 
use ieee.std_logic_1164.all; 
use ieee.std_logic_unsigned.all;

entity AES_Full_InvMixColumns_mul13_ROM_AUTO_1R is 
    generic(
             DataWidth     : integer := 8; 
             AddressWidth     : integer := 8; 
             AddressRange    : integer := 256
    ); 
    port (
          address0      : in std_logic_vector(AddressWidth-1 downto 0); 
          ce0       : in std_logic; 
          q0         : out std_logic_vector(DataWidth-1 downto 0);
          reset     : in std_logic;
          clk       : in std_logic
    ); 
end entity; 


architecture rtl of AES_Full_InvMixColumns_mul13_ROM_AUTO_1R is 

signal address0_tmp : std_logic_vector(AddressWidth-1 downto 0); 
type mem_array is array (0 to AddressRange-1) of std_logic_vector (DataWidth-1 downto 0); 
signal mem : mem_array := (
    0 => "00000000", 1 => "00001101", 2 => "00011010", 3 => "00010111", 
    4 => "00110100", 5 => "00111001", 6 => "00101110", 7 => "00100011", 
    8 => "01101000", 9 => "01100101", 10 => "01110010", 11 => "01111111", 
    12 => "01011100", 13 => "01010001", 14 => "01000110", 15 => "01001011", 
    16 => "11010000", 17 => "11011101", 18 => "11001010", 19 => "11000111", 
    20 => "11100100", 21 => "11101001", 22 => "11111110", 23 => "11110011", 
    24 => "10111000", 25 => "10110101", 26 => "10100010", 27 => "10101111", 
    28 => "10001100", 29 => "10000001", 30 => "10010110", 31 => "10011011", 
    32 => "10111011", 33 => "10110110", 34 => "10100001", 35 => "10101100", 
    36 => "10001111", 37 => "10000010", 38 => "10010101", 39 => "10011000", 
    40 => "11010011", 41 => "11011110", 42 => "11001001", 43 => "11000100", 
    44 => "11100111", 45 => "11101010", 46 => "11111101", 47 => "11110000", 
    48 => "01101011", 49 => "01100110", 50 => "01110001", 51 => "01111100", 
    52 => "01011111", 53 => "01010010", 54 => "01000101", 55 => "01001000", 
    56 => "00000011", 57 => "00001110", 58 => "00011001", 59 => "00010100", 
    60 => "00110111", 61 => "00111010", 62 => "00101101", 63 => "00100000", 
    64 => "01101101", 65 => "01100000", 66 => "01110111", 67 => "01111010", 
    68 => "01011001", 69 => "01010100", 70 => "01000011", 71 => "01001110", 
    72 => "00000101", 73 => "00001000", 74 => "00011111", 75 => "00010010", 
    76 => "00110001", 77 => "00111100", 78 => "00101011", 79 => "00100110", 
    80 => "10111101", 81 => "10110000", 82 => "10100111", 83 => "10101010", 
    84 => "10001001", 85 => "10000100", 86 => "10010011", 87 => "10011110", 
    88 => "11010101", 89 => "11011000", 90 => "11001111", 91 => "11000010", 
    92 => "11100001", 93 => "11101100", 94 => "11111011", 95 => "11110110", 
    96 => "11010110", 97 => "11011011", 98 => "11001100", 99 => "11000001", 
    100 => "11100010", 101 => "11101111", 102 => "11111000", 103 => "11110101", 
    104 => "10111110", 105 => "10110011", 106 => "10100100", 107 => "10101001", 
    108 => "10001010", 109 => "10000111", 110 => "10010000", 111 => "10011101", 
    112 => "00000110", 113 => "00001011", 114 => "00011100", 115 => "00010001", 
    116 => "00110010", 117 => "00111111", 118 => "00101000", 119 => "00100101", 
    120 => "01101110", 121 => "01100011", 122 => "01110100", 123 => "01111001", 
    124 => "01011010", 125 => "01010111", 126 => "01000000", 127 => "01001101", 
    128 => "11011010", 129 => "11010111", 130 => "11000000", 131 => "11001101", 
    132 => "11101110", 133 => "11100011", 134 => "11110100", 135 => "11111001", 
    136 => "10110010", 137 => "10111111", 138 => "10101000", 139 => "10100101", 
    140 => "10000110", 141 => "10001011", 142 => "10011100", 143 => "10010001", 
    144 => "00001010", 145 => "00000111", 146 => "00010000", 147 => "00011101", 
    148 => "00111110", 149 => "00110011", 150 => "00100100", 151 => "00101001", 
    152 => "01100010", 153 => "01101111", 154 => "01111000", 155 => "01110101", 
    156 => "01010110", 157 => "01011011", 158 => "01001100", 159 => "01000001", 
    160 => "01100001", 161 => "01101100", 162 => "01111011", 163 => "01110110", 
    164 => "01010101", 165 => "01011000", 166 => "01001111", 167 => "01000010", 
    168 => "00001001", 169 => "00000100", 170 => "00010011", 171 => "00011110", 
    172 => "00111101", 173 => "00110000", 174 => "00100111", 175 => "00101010", 
    176 => "10110001", 177 => "10111100", 178 => "10101011", 179 => "10100110", 
    180 => "10000101", 181 => "10001000", 182 => "10011111", 183 => "10010010", 
    184 => "11011001", 185 => "11010100", 186 => "11000011", 187 => "11001110", 
    188 => "11101101", 189 => "11100000", 190 => "11110111", 191 => "11111010", 
    192 => "10110111", 193 => "10111010", 194 => "10101101", 195 => "10100000", 
    196 => "10000011", 197 => "10001110", 198 => "10011001", 199 => "10010100", 
    200 => "11011111", 201 => "11010010", 202 => "11000101", 203 => "11001000", 
    204 => "11101011", 205 => "11100110", 206 => "11110001", 207 => "11111100", 
    208 => "01100111", 209 => "01101010", 210 => "01111101", 211 => "01110000", 
    212 => "01010011", 213 => "01011110", 214 => "01001001", 215 => "01000100", 
    216 => "00001111", 217 => "00000010", 218 => "00010101", 219 => "00011000", 
    220 => "00111011", 221 => "00110110", 222 => "00100001", 223 => "00101100", 
    224 => "00001100", 225 => "00000001", 226 => "00010110", 227 => "00011011", 
    228 => "00111000", 229 => "00110101", 230 => "00100010", 231 => "00101111", 
    232 => "01100100", 233 => "01101001", 234 => "01111110", 235 => "01110011", 
    236 => "01010000", 237 => "01011101", 238 => "01001010", 239 => "01000111", 
    240 => "11011100", 241 => "11010001", 242 => "11000110", 243 => "11001011", 
    244 => "11101000", 245 => "11100101", 246 => "11110010", 247 => "11111111", 
    248 => "10110100", 249 => "10111001", 250 => "10101110", 251 => "10100011", 
    252 => "10000000", 253 => "10001101", 254 => "10011010", 255 => "10010111" );


begin 


memory_access_guard_0: process (address0) 
begin
      address0_tmp <= address0;
--synthesis translate_off
      if (CONV_INTEGER(address0) > AddressRange-1) then
           address0_tmp <= (others => '0');
      else 
           address0_tmp <= address0;
      end if;
--synthesis translate_on
end process;

p_rom_access: process (clk)  
begin 
    if (clk'event and clk = '1') then
        if (ce0 = '1') then 
            q0 <= mem(CONV_INTEGER(address0_tmp)); 
        end if;
    end if;
end process;

end rtl;

