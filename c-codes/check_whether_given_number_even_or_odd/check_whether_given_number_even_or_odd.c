//Program to check whether given number is even or not

#include<stdio.h>

int main()
{
	int number;

	printf("Enter a number:");
	scanf("%d",&number);

	if(number % 2 == 0)
	{
		printf("\nGiven number is even\n");
	}

	else
	{
		printf("\nGiven number is odd\n");
	}

	return 0;
}
