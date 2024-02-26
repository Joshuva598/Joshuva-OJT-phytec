#include<stdio.h>

int main()
{
	int number1;
	int number2;
	
	printf("Enter number1:");
	scanf("%d",&number1);

	printf("Enter number2:");
	scanf("%d",&number2);

	int sum = number1 + number2;

	printf("sum = %d\n",sum);

	return 0;
}
