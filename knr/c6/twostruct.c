#include<stdio.h>

struct point{
        int x;
        int y;
};
struct point pt;
struct second{
	struct point p1;
	struct point p2;
};
struct second sec;

void fun()
{
	printf("enter the inputs:");
	scanf("%d%d%d%d",&sec.p1.x,&sec.p1.y,&sec.p2.x,&sec.p2.y);
/*	sec.p1.x=4;
	sec.p1.y=6;
	sec.p2.x=3;
	sec.p2.y=9;*/
}
main()
{
	fun(); 
	printf("sum of two numbers P1:%d\n\t\t   P2:%d\n",(sec.p1.x+sec.p1.y),(sec.p2.x+sec.p2.y));
}

