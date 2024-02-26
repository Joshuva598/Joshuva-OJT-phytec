
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


#include "mraa/gpio.h"


#define GPIO_PIN_1 61
#define GPIO_PIN_2 62

volatile sig_atomic_t flag = 1;

void
sig_handler(int signum)
{
    if (signum == SIGINT) {
        fprintf(stdout, "Exiting...\n");
        flag = 0;
    }
}

int
main(void)
{
    mraa_result_t status = MRAA_SUCCESS;
    mraa_gpio_context gpio_1, gpio_2;


    signal(SIGINT, sig_handler);


    mraa_init();

 
    gpio_1 = mraa_gpio_init(GPIO_PIN_1);
    if (gpio_1 == NULL) {
        fprintf(stderr, "Failed to initialize GPIO %d\n", GPIO_PIN_1);
        mraa_deinit();
        return EXIT_FAILURE;
    }


    gpio_2 = mraa_gpio_init(GPIO_PIN_2);
    if (gpio_2 == NULL) {
        fprintf(stderr, "Failed to initialize GPIO %d\n", GPIO_PIN_2);
        mraa_deinit();
        return EXIT_FAILURE;
    }


    status = mraa_gpio_dir(gpio_1, MRAA_GPIO_OUT);
    if (status != MRAA_SUCCESS) {
        goto err_exit;
    }


    status = mraa_gpio_dir(gpio_2, MRAA_GPIO_OUT);
    if (status != MRAA_SUCCESS) {
        goto err_exit;
    }


    while (flag) {
        status = mraa_gpio_write(gpio_1, 1);
        if (status != MRAA_SUCCESS) {
            goto err_exit;
        }

        status = mraa_gpio_write(gpio_2, 0);
        if (status != MRAA_SUCCESS) {
            goto err_exit;
        }

        sleep(1);

        status = mraa_gpio_write(gpio_1, 0);
        if (status != MRAA_SUCCESS) {
            goto err_exit;
        }

        status = mraa_gpio_write(gpio_2, 1);
        if (status != MRAA_SUCCESS) {
            goto err_exit;
        }

        sleep(1);
    }


    status = mraa_gpio_close(gpio_1);
    if (status != MRAA_SUCCESS) {
        goto err_exit;
    }


    status = mraa_gpio_close(gpio_2);
    if (status != MRAA_SUCCESS) {
        goto err_exit;
    }


    mraa_deinit();

    return EXIT_SUCCESS;

err_exit:
    mraa_result_print(status);

    mraa_deinit();

    return EXIT_FAILURE;
}
