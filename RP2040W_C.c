//#include <stdio.h>
//#include <stdlib.h>

//#include "pico/stdlib.h"
//#include "hardware/pio.h"
//#include "hardware/clocks.h"
#include "pico/stdlib.h"

int main() {
	const uint LED_PIN = 10;
	gpio_init(LED_PIN);
	gpio_set_dir(LED_PIN, GPIO_OUT);
	stdio_init_all();

	while (true) {
		gpio_put(LED_PIN, 1);
		sleep_ms(250);
		gpio_put(LED_PIN, 0);
		sleep_ms(250);
	}
}
