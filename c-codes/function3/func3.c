#include<stdio.h>

int sum (void);

int main ()
{
   int c;
   c= sum ();
   printf("sum = %d\n",c);
   return 0;
}

int sum ()
{
   int a,b,c;
   printf("enter 2 numbers:");
   scanf ("%d%d", &a, &b);
   c = a+b;
   return c;
}
