
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>


#include "mraa/uart.h"

#ifndef FALSE
#define FALSE 0
#define TRUE (!FALSE)
#endif


const char* dev_path = "/dev/ttyS3";

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
main(int argc, char** argv)
{
    mraa_result_t status = MRAA_SUCCESS;
    mraa_uart_context uart;
    char buffer[] = "Hello Mraa!";
    char buffer1[sizeof(buffer)]={'\0'};

    int baudrate = 9600, stopbits = 1, databits = 8;
    mraa_uart_parity_t parity = MRAA_UART_PARITY_NONE;
    unsigned int ctsrts = FALSE, xonxoff = FALSE;


    signal(SIGINT, sig_handler);


    mraa_init();

   
    uart = mraa_uart_init_raw(dev_path);
    if (uart == NULL) {
        fprintf(stderr, "Failed to initialize UART\n");
        return EXIT_FAILURE;
    }


    status = mraa_uart_set_baudrate(uart, baudrate);
    if (status != MRAA_SUCCESS) {
        goto err_exit;
    }
    status = mraa_uart_set_mode(uart, databits, parity, stopbits);
    if (status != MRAA_SUCCESS) {
        goto err_exit;
    }
   

   while (flag) {

        mraa_uart_write(uart, buffer, sizeof(buffer));

	mraa_uart_read(uart, buffer1, sizeof(buffer1));

	printf("%s\n",buffer1);
	
        sleep(1);
    }


    mraa_uart_stop(uart);

    
    mraa_deinit();

    return EXIT_SUCCESS;

err_exit:
    mraa_result_print(status);


    mraa_uart_stop(uart);


    mraa_deinit();

    return EXIT_FAILURE;
}
