#include<stdio.h>
unsigned getbits(unsigned x,int p,int n);
void main()
{
	unsigned i,k;
	int j,p;
	for(i=0;i<=10;i++)
	{
		for(p=0;p<=3;p++)
		{
			k=getbits(i,p,2);
			printf("bit %d of %u=%u\n" ,p ,i ,k);
		}
		
	}
}
unsigned getbits(unsigned x, int p, int n)
{
	unsigned l;
	l=(x >>(p+1-n) & ~(~0 << n));
	return(l);
}
	






