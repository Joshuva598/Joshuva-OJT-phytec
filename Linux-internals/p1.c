
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char* argv[])
{
	if(argc!=2)
	{                
		printf("Invalid number of arguments entered\
			    	enter filename to display its contents....\n");
		exit(1);
	}
	
	FILE* fp=fopen(argv[1],"r");

	if(fp==NULL)
	{ 	
		perror("fopen() failed\n");exit(1);
	}
	int c;

	while((c=fgetc(fp))!=EOF)
        	putc(c,stdout); 
	fclose(fp);
	return 0;
}
