
#include <errno.h>
#include <fcntl.h> 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <termios.h>
#include <unistd.h>

int set_interface_attribs(int fd, int speed)
{
	struct termios tty;

	if (tcgetattr(fd, &tty) < 0) 
	{
		printf("Error from tcgetattr: %s\n", strerror(errno));
		return -1;
	}


	cfsetispeed(&tty, (speed_t)speed);
	tty.c_cflag |= (CLOCAL | CREAD);    
	tty.c_cflag &= ~CSIZE;
	tty.c_cflag |= CS8;         
	tty.c_cflag &= ~PARENB;     
	tty.c_cflag &= ~CSTOPB;     
	tty.c_cflag &= ~CRTSCTS;    


        tty.c_iflag = IGNPAR;
        tty.c_lflag = 0;

        
	tty.c_cc[VMIN] = 1;
	tty.c_cc[VTIME] = 1;

	if (tcsetattr(fd, TCSANOW, &tty) != 0) 
	{
		printf("Error from tcsetattr: %s\n", strerror(errno));
		return -1;
	}
	return 0;
}


int main()
{
	char *portname = "/dev/ttyS3";
	int fd;
	int wlen;
	int rdlen;
	int ret;

	char res[5];

	unsigned char buf1[12] ={0};

	fd = open(portname, O_RDWR | O_NOCTTY | O_SYNC);
	if (fd < 0) 
	{
		printf("Error opening %s: %s\n", portname, strerror(errno));
		return -1;
	}
        set_interface_attribs(fd, B9600);

	rdlen = read(fd, buf1,sizeof(buf1));
	for(int i=0;i<rdlen;i++)
	      printf("%c", buf1[i]);
	      
	printf("\n");


return 0;
}


