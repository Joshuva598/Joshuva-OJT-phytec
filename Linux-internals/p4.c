
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char* argv[])
{
	if(argc!=2)
	{
		printf("Invalid number of arguments entered. Please\
			enter filename to display its contents....\n");
		exit(1);
	}

	if(fp==NULL)
	{
		perror("fopen() failed\n");
		exit(1);
	}

	char name[20];
	printf("Enter you friends name: ");
 	scanf("%[^\n]s",name);
	fputs(name,fp);
	fputc('\n',fp);
	printf("Done..Bye..Bye..\n");
	fclose(fp);
	return 0;
}
