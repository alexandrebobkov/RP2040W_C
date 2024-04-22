cmake_minimum_required(VERSION 3.13)
include(/home/x415ja/pico/pico-sdk/pico_sdk_init.cmake)
include(/home/x415ja/pico/pico-sdk/external/pico_sdk_import.cmake)
project(bmp280_i2c C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)
pico_sdk_init()
add_executable(bmp280_i2c
	bmp280_i2c.c
	)
target_link_libraries(bmp280_i2c PRIVATE pico_stdlib hardware_i2c)
pico_add_extra_outputs(bmp280_i2c)

