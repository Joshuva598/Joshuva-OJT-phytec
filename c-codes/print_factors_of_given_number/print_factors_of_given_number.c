#include<stdio.h>

int main()
{
	int number;

	printf("Enter number to print factors :");
	scanf("%d",&number);

	printf("Factors of %d :",number);

	for(int i = 1 ; i <= 10 ; i++)
	{
		printf("%d ",number * i);
	}

	return 0;
}
