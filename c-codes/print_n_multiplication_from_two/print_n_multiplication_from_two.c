//Program to print n multiplication table from two

#include<stdio.h>

int main()
{
	int start =2;
	int end;

	printf("Enter number,upto print the multiplication table:");
	scanf("%d",&end);

	for(int i = start ; i <= end ; i++)
	{
		for(int j = 1 ; j <= 10 ; j++)
		{
			printf("%d X %d = %d\n",i,j,i*j);
		}

		printf("\n");
	}

	return 0;
}


