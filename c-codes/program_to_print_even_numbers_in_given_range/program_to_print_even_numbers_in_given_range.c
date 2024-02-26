//Program to print even numbers in given range

#include<stdio.h>

int main()
{
	int first_number = 1;
	int end_number;

	printf("Enter end number:");
	scanf("%d",&end_number);

	for(int i = first_number ; i <= end_number ; i++)
	{
		if(i % 2 == 0)
		{
			printf("%d ",i);
		}
	}

	return 0;
}


