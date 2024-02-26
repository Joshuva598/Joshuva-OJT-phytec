#include<stdio.h>

int main(){
	int num;
	int result=1;

	printf("Enter number :");
	scanf("%d",&num);


	while(num>0)
	{
		result = result* num;
		num--;
	}

	printf("Factorial of given number %d\n",result);

	return 0;
}	
