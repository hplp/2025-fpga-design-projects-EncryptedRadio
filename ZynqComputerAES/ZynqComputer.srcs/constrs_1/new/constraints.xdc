#set_property -dict {PACKAGE_PIN T14 IOSTANDARD LVCMOS33} [get_ports {uart_rtl_rxd}] # io 0
#set_property -dict {PACKAGE_PIN U12 IOSTANDARD LVCMOS33} [get_ports {uart_rtl_txd}] # io 1

set_property PACKAGE_PIN T14 [get_ports uart_rtl_rxd] 
set_property IOSTANDARD LVCMOS33 [get_ports uart_rtl_rxd]

set_property PACKAGE_PIN U12 [get_ports uart_rtl_txd] 
set_property IOSTANDARD LVCMOS33 [get_ports uart_rtl_txd]