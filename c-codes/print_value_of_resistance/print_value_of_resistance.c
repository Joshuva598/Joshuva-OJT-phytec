//program to print vaue of resistance,when voltage and current is provided

#include<stdio.h>

int main()
{
	int voltage = 2;
	int current = 1;

	int V = voltage;
	int I = current;

	int R = V/I;

	printf("Resistance is %d based on voltage is %d and current is %d\n",R,V,I);

	return 0;
}
