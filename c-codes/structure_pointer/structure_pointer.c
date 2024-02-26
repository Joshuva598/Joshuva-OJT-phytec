#include<stdio.h>

struct Point
{
	int x, y;
};

int main()
{
	struct Point p1 = {100, 200};

        struct Point *p2 = &p1;

        printf("%d %d\n",p2->x,p2->y);


        return 0;
}
