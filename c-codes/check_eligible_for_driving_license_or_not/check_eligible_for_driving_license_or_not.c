//Program to check whether a person eligible or not

#include<stdio.h>

int main()
{
	int age;

	printf("Enter age of person :");
	scanf("%d",&age);

	if(age >= 18)
	{
		printf("\nEligible for license\n");
	}

	else
	{
		printf("\nNot eligible for license\n");
	}

	return 0;
}
