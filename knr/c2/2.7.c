#include<stdio.h>
unsigned invert(unsigned x,int p,int n);
void main()
{
	unsigned i,k;
	int j,p;
	for(i=0;i<=10;i++)
	{
		for(j=0;j<=8;j++)
		{
			for(p=0;p<=8;p++)
			{
				k=invert(i,j,p);
				printf("inverted %u,=%u\n",i,k);
			}
		}
	}
}
unsigned invert(unsigned x, int p, int n)
{
	unsigned l;
	l= x ^ ((~(~0<<n))<< p+1-n);
	return(l);
}







