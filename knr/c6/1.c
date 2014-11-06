#include<stdio.h>

struct point{
	int x;
	int y;
};
struct point pt;

main()
{
	pt.x=2;
	pt.y=4;
	printf("sum of two numbers:%d\n",(pt.x+pt.y));
}
