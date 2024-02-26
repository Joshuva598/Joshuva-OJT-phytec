#include<stdio.h>

int main()
{
	double length;
	double breadth;

	printf("Enter length of rectangle :");
        scanf("%lf",&length);

	printf("Enter breadth of rectangle :");
	scanf("%lf",&breadth);

	double area;

	area = length * breadth;

	printf("Area of rectangle : %lf\n",area);

	return 0;
}
