#include<stdio.h>

#define PI 3.141


int main()
{
	int r;
	int perimeter;

	printf("enter the radius of circle :");
	scanf("%d",&r);

	perimeter = 2 * PI * r;

	printf("\nPerimeter of circle : %d\n",perimeter);
	
	return 0;

}
