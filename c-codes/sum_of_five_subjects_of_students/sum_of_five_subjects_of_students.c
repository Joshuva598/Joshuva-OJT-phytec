//program to print sum of five subjects marks of a student

#include<stdio.h>

int main()
{
	int subject_marks[5];
	int total = 0;

	for(int i=0;i<5;i++)
	{
		printf("Enter subject%d marks:",i+1);
		scanf("%d",&subject_marks[i]);

		total += subject_marks[i];

	}

	printf("\n");

	printf("Sum of five subjects marks : %d\n",total);

	return 0;
}
