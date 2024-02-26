//Program to print multiplication table of three

#include<stdio.h>

int main()
{
	int number =3;

	for(int i = 1 ; i <= 10 ; i++)
	{
		printf("%d X %d = %d\n",number,i,number*i);
	}

	return 0;
}
