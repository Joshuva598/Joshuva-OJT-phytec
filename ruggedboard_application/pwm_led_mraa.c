
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>


#include "mraa/pwm.h"


#define PWM 72


#define PWM_FREQ 200

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
    mraa_pwm_context pwm;

    float value = 0.5f;
    float output;


    mraa_init();


    pwm = mraa_pwm_init(PWM);
    if (pwm == NULL) {
        fprintf(stderr, "Failed to initialize PWM\n");
        mraa_deinit();
        return EXIT_FAILURE;
    }


    status = mraa_pwm_period_us(pwm, PWM_FREQ);
    if (status != MRAA_SUCCESS) {
        goto err_exit;
    }


    status = mraa_pwm_enable(pwm, 1);
    if (status != MRAA_SUCCESS) {
        goto err_exit;
    }

    while (flag) {
        value = value + 0.01f;
       


        status = mraa_pwm_write(pwm, value);
        if (status != MRAA_SUCCESS) {
            goto err_exit;
        }

        usleep(50000);

        if (value >= 1.0f) {
            value = 0.0f;
        }


        output = mraa_pwm_read(pwm);
        fprintf(stdout, "PWM value is %f\n", output);
    }


    mraa_pwm_close(pwm);

   
    mraa_deinit();

    return EXIT_SUCCESS;

err_exit:
    mraa_result_print(status);


    mraa_pwm_close(pwm);


    mraa_deinit();

    return EXIT_FAILURE;
}
