cmake_minimum_required(VERSION 3.13)
include(/opt/pico/pico-sdk/pico_sdk_init.cmake)
include(/opt/pico/pico-sdk/external/pico_sdk_import.cmake)
project(blink C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
pico_sdk_init()
add_executable(blink
	blink.c
	)

# by default the header is generated into the build dir
#pico_generate_pio_header(pio_blink ${CMAKE_CURRENT_LIST_DIR}/blink.pio)
# however, alternatively you can choose to generate it somewhere else (in this case in the source tree for check in)
#pico_generate_pio_header(pio_blink /home/x415ja/Programming/RP2040W_C/pio_blink/blink.pio)

pico_generate_pio_header(blink ${CMAKE_CURRENT_LIST_DIR}/blink.pio OUTPUT_DIR ${CMAKE_CURRENT_LIST_DIR}/generated)

target_sources(blink PRIVATE blink.c)

target_link_libraries(blink PRIVATE pico_stdlib hardware_pio)
pico_add_extra_outputs(blink)

# add url via pico_set_program_url
#example_auto_set_url(pio_blink)
