//Program to print_power_when_current_and_resistance_is_provided

#include<stdio.h>

int main()
{
	int I;
	int R;

	printf("Enter current value : ");
	scanf("%d",&I);

	printf("Enter Resistance : ");
	scanf("%d",&R);

	int P;

	P = I * I * R;

	printf("Power is %d ,based on Resistance is %d and Current is %d\n",P,I,R);
	return 0;
}


