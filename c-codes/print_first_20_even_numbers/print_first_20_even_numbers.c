//Program to print first 20 even numbers

#include<stdio.h>

int main()
{
	for(int i = 1 ; i <= 40 ; i++)
	{
		if(i % 2 == 0)
		{
			printf("%d ",i);
		}
	}

	return 0;
}

