// Raspberry Pi Pico
// Modified: April 22, 2024

#include <stdio.h>
#include "pico/stdlib.h"

int main() {
	const uint LED_PIN = 10;		// LED GPIO pin
	gpio_init(LED_PIN);
	gpio_set_dir(LED_PIN, GPIO_OUT);	// Set GPIO for output
	stdio_init_all();

	while (true) {				// Blink LED every 1/4 second
		gpio_put(LED_PIN, 1);
		sleep_ms(250);
		gpio_put(LED_PIN, 0);
		sleep_ms(250);
	}
}
