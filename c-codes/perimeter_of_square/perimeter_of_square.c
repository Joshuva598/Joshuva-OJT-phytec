#include<stdio.h>

int main()
{
	int side;
	int perimeter;

	printf("Enter a side value of a square:");
	scanf("%d",&side);

	perimeter = 4 * side;
	
	printf("\nPerimeter of square:%d\n",perimeter);

	return 0;

}
