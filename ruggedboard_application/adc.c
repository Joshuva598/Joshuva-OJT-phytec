
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <unistd.h>
#include <fcntl.h>

#include "adc.h"


int adc_init(struct adc_config_t *adc_desc)
{


	int mode_fd;

	int capture_fd;

	capture_fd  = open("/sys/bus/iio/devices/iio:device0/buffer/enable", O_WRONLY);
	if(capture_fd < 0 )
	{
		perror("open buffer enable error");
	}
	if(adc_desc->capture)
		write(capture_fd, "1", 2);
	else
		write(capture_fd, "0", 2);
	
	close(capture_fd);

	int length_fd;

	 length_fd  = open("/sys/bus/iio/devices/iio:device0/buffer/length", O_WRONLY);
	if(length_fd < 0 )
	{
		perror("open buffer length error");
	}

	snprintf(adc_desc->buf, sizeof(adc_desc->buff_length), "%d", adc_desc->buff_length);

	write(length_fd, adc_desc->buf, strlen(adc_desc->buf));
	
	close(length_fd);

	return 0;
}

int adc_set_channel(struct adc_config_t *adc_desc, int channel)
{
	int channel_fd;

	  sprintf(adc_desc->buf, "/sys/bus/iio/devices/iio:device0/scan_elements/in_voltage%d_en", channel);

	channel_fd  = open(adc_desc->buf, O_WRONLY);
	if(channel_fd < 0 )
	{
		perror("open scan_elements/in_voltage6_en error");
	}

	write(channel_fd, "1", 2);
	
	close(channel_fd);

	return 0;
}

int adc_output(struct adc_config_t *adc_desc, int channel)
{
	int output_fd, adc_data;
	char result[10], ret=0;

	  sprintf(adc_desc->buf, "/sys/bus/iio/devices/iio:device0/in_voltage%d_raw", channel);

	output_fd  = open(adc_desc->buf, O_RDONLY);
	if(output_fd < 0 )
	{
		perror("open in_voltage6_raw   error");
	}


	ret = read(output_fd, result, sizeof(result));

	adc_data = atoi(result);

	close(output_fd);

	return adc_data;
}
