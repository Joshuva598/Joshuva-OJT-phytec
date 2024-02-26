#ifndef _ADC_H
#define _ADC_H 

#define ONESHOT "oneshot"
#define CONTINUOUS "continuous"

struct adc_config_t {
		char *adc_mode;				
		int capture;				
		unsigned int buff_length;   
		int adc_channel;			
        unsigned char buf[100];	
};

int adc_init(struct adc_config_t *);
int adc_set_channel(struct adc_config_t *, int);
int adc_output(struct adc_config_t *, int);

#endif
