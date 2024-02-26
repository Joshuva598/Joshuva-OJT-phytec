
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
	int n;
	fscanf(fp,"%d, ",&n);
	while(feof(fp)==0)
	{
		fprintf(stdout,"%d ",n);
		fscanf(fp,"%d, ",&n);
         }
         printf("\n");
         fclose(fp);
         return 0;
}
