#include<stdio.h>
unsigned rightrot(unsigned x,int n);
unsigned getbits(unsigned x,int p,int n);
void main()
{
	unsigned i,k;
	int j,p;
	for(i=0;i<=10;i++)
	{
		for(p=0;p<=8;p++)
		{
			k=rightrot(i,p);
			printf("rote %d of %u=%u\n" ,p ,i ,k);
		}
		
	}
}
unsigned getbits(unsigned x, int p, int n)
{
	unsigned l;
	l=(x >>(p+1-n) & ~(~0 << n));
	return(l);
}
unsigned int rightrot(unsigned int x, int n)
{
	int m, i;

	for(i=0; i < n; i++)
	{
		m = getbits(x, 0, 1);
		m <<= (sizeof(m)*8-1);
		x >>= 1;
		x |= m;
	}
	return x;
}	






