//Program to print bigger value among numbers,by getting input from user.

#include<stdio.h>

int main()
{
	int number1;
	int number2;

	printf("Enter number1:");
	scanf("%d",&number1);

	printf("Enter number2:");
	scanf("%d",&number2);

	if(number1 > number2)
	{
		printf("\nnumber1 is bigger than number2\n");
	}

	else
	{
		printf("\nnumber2 is bigger than number1\n");
	}

	return 0;
}


