//Program to check whether follows kirchoff law or not

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

	int sum_of_entering = I1 + I2 + I4 + I5;

	int sum_of_leaving = I3 + I6;

	if(sum_of_entering == sum_of_leaving)
	{
		printf("\nFollows Kirchoff's law\n");

	}

	else
	{
		printf("Not follows Kirchoff's law\n");
	}

	return 0;
}

