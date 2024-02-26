//Program to print first 20 even numbers in reverse order

#include<stdio.h>

int main()
{
	int last_number = 40;

	for(int i = last_number ; i >0 ; --i)
	{
		if(i % 2 == 0)
		{
			printf("%d ",i);
		}
	}

	return 0;
}
