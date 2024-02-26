//program_to_print_calculated_X_value_based_on_V,I,R1,R2,R3

#include<stdio.h>

int main()
{
	int R1;
	int R2;
	int R3;
	int I;
	int V;

	printf("Ener R1 value:");
	scanf("%d",&R1);

	printf("\nEnter R2 value:");
        scanf("%d",&R2);

	printf("\nEnter R3 value:");
        scanf("%d",&R3);

	printf("\nEnter I value:");
	scanf("%d",&I);

	printf("\nEnter V value:");
	scanf("%d",&V);

	int X;

	X = R1/(R2*R3);

	printf("\nV is %d based on R1 is %d,R2 is %d,R3 is %d,I is %d,V is %d\n",X,R1,R2,R3,I,V);

	return 0;
}	
