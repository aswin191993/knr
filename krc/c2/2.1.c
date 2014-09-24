#include<stdio.h>
main()
{	
	unsigned long int i;
	unsigned char c;
	float f;
	signed int j;
	signed char sc;
	float sf;
	int a,b,e,g,d,h;
	//float h;
	a=sizeof(i);
	b=sizeof(c);
	d=sizeof(f);
	e=sizeof(j);
	g=sizeof(sc);
	h=sizeof(sf);
	printf("un int:%d\nun char:%d\nun float:%d\nsin int:%d\nsin char:%d\nsin float%d:\n",a ,b ,d ,e ,g ,h);
}
