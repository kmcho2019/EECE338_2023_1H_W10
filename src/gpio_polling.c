#include <stdio.h>
#include <time.h>
#include <pigpio.h>
#include "helper.h"

#define PIN_BTN 14
#define PIN_LEDR 16
#define PIN_LEDG 20
#define PIN_LEDB 21
#define PIN_SERVO 12

// NEVER change SERVO_POS_MIN and SERVO_POS_MAX.
// Changing two values may break your servo motor.
#define SERVO_POS_MIN 1000
#define SERVO_POS_MAX 2000

#define LOOP_PERIOD_MS 2000

int main()
{
    unsigned long t_start_ms, t_elapsed_ms;

    /* [P1] Write your variables FROM here*/

    /* [P1] Write your variables UP TO here*/

    // GPIO settings
    if(gpioInitialise()<0) {
        printf("Cannot initialize GPIOs\r\n");
        return 1;
    }

    gpioSetMode(PIN_LEDR, PI_OUTPUT);
    gpioSetMode(PIN_LEDG, PI_OUTPUT);
    gpioSetMode(PIN_LEDB, PI_OUTPUT);
    gpioSetMode(PIN_BTN, PI_INPUT);

    gpioSetPullUpDown(PIN_BTN, PI_PUD_UP);
    gpioWrite(PIN_LEDR, PI_LOW);
    gpioWrite(PIN_LEDG, PI_LOW);
    gpioWrite(PIN_LEDB, PI_LOW);

    // Infinite loop
    while(1) {
        t_start_ms = millis();

        /*** [P1] Write your code FROM here ***/
        // Set the servo position to SERVO_POS_MIN

        // Sleep for 1000 ms

        // Set the servo position to SERVO_POS_MAX

        // Sleep for 1000 ms

        // Read the button pin state

        // If the button is pushed, change the led color.
        // Note that the LED must not be turned off, and
        // at least five colors should be chosen. 

        /*** [P1] Write your code UP TO here ***/

        t_elapsed_ms = millis() - t_start_ms;
        sleep_ms(LOOP_PERIOD_MS - t_elapsed_ms);
    }

    return 1;
}
