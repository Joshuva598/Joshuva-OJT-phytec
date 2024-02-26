#include<stdio.h>

int main()
{
	int side;
	int area;

	printf("Enter the side of square:");
	scanf("%d",&side);

	area = side * side;

	printf("\nArea of Square:%d\n",area);

	return 0;

}
