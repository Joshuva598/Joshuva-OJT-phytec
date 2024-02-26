//Program to print sum of current by take values of I1,I2,I3,I4,I5 and I6 from point to point

#include<stdio.h>

int main()
{
	int I1;
	int I2;
	int I3;
	int I4;
	int I5;
	int I6;

	printf("Enter I1:");
	scanf("%d",&I1);

	printf("\nEnter I2:");
        scanf("%d",&I2);

	printf("\nEnter I3:");
        scanf("%d",&I3);

	printf("\nEnter I4:");
        scanf("%d",&I4);

	printf("\nEnter I5:");
        scanf("%d",&I5);

	printf("\nEnter I6:");
        scanf("%d",&I6);

	int sum = I1 + I2 -I3 + I4 + I5 - I6;

	printf("\nSum of the current : %d\n",sum);

	return 0;
}

