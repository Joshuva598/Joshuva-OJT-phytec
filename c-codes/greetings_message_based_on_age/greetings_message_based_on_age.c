//Program to print greetings message based on age

#include<stdio.h>

int main()
{
	int age;

	printf("Enter age:");
	scanf("%d",&age);

	if(age > 50)
	{
		printf("\nOldage\n");
	}

	else if(age < 50 && age >25)
	{
		printf("\nMiddle age\n");
	}

	else if(age <=25 && age > 15)
	{
		printf("\nYoung dynamic\n");
	}

	else if(age <= 15 && age > 10)
	{
		printf("\nTeenager\n");
	}

	else if(age > 5)
	{
		printf("\nNice child\n");
	}

	else
	{
		printf("Nice kid\n");
	}

	return 0;
}
