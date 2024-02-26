#include<stdio.h>

int main()
{
	int num1 = 0;
	int num2 = 1;
	int number;

	printf("Enter number :");
	scanf("%d",&number);

	printf("%d %d",num1,num2);

	for(int i = 0 ; i < number ; i++)
	{
		int num3 = num1 + num2;
	
		printf(" %d",num3);
	
		num1 = num2;
		num2 = num3;
	}

	return 0;
}
