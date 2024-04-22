#include <stdio.h>
#include "pico/binary_info.h"
#include "pico/stdlib.h"

#define ADDR _u(0x76)
#define REG_CONFIG _u(0xF5)
#define REG_CTRL_MEAS _u(0xF4)
#define REG_RESET _u(0xE0)

struct bmp280_calib_param {
	uint16_t dig_t1
};

void bmp280_init() {}
void bmp280_read_raw() {}
void bmp280_reset() {}
int32_t bmp280_convert (int32_t temp, struct bmp280_calib_param* params) {
	return 0;
}

int main() {
	stdio_init_all();
	return 0;
}
