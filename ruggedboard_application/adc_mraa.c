
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>


#include "mraa/aio.h"


#define AIO_PORT 6

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
main()
{
    mraa_result_t status = MRAA_SUCCESS;
    mraa_aio_context aio;
    uint16_t value = 0;
    float float_value = 0.0;

    signal(SIGINT, sig_handler);


    mraa_init();

    aio = mraa_aio_init(AIO_PORT);
    if (aio == NULL) {
        fprintf(stderr, "Failed to initialize AIO\n");
        mraa_deinit();
        return EXIT_FAILURE;
    }

    while (flag) {
        value = mraa_aio_read(aio);
        float_value = mraa_aio_read_float(aio);
        fprintf(stdout, "ADC A0 read %X - %d\n", value, value);
        fprintf(stdout, "ADC A0 read float - %.5f\n", float_value);
    }

    status = mraa_aio_close(aio);
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
