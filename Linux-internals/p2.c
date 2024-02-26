
#include<stdio.h>
#include<stdlib.h>

int main(int argc,char* argv[])
{


	if(argc!=2)
	{ 
		printf("Invalid number of arguments entered.\
		Please enter filename to display its contents....\n");
		exit(1);
	}
	
	FILE* fp=fopen(argv[1],"r");

	if(fp==NULL)
	{
		perror("fopen() failed\n");exit(1);
	}

	char buff[512];

	while(fgets(buff,512,fp)!=NULL) 
		fputs(buff,stdout);
	fclose(fp); 
	return 0;
}
