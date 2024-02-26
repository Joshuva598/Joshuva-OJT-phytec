#include<stdio.h>

int main()
{

	int number1;
	int number2;
	int number3;

	printf("Enter first number:");
	scanf("%d",&number1);

	printf("\nEnter second number:");
	scanf("%d",&number2);

	printf("\nEnter thrid number:");
	scanf("%d",&number3);

	//use float to get accurate output
	float total = number1 + number2 + number3;

	float average;

	average = (total)/3;

	printf("\nAverage of three numbers : %f\n",average);

	return 0;
}
