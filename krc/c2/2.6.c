#include <stdio.h>
unsigned setbits(unsigned x,int p,int n);
int main(void)
{
	unsigned i;
	unsigned k;
	int p;
	int n;
 	for(i = 0; i < 100; i ++)
 	{
 	    	for(p = 0; p < 8; p++)
		{
 		       	for(n = 1; n <= p + 1; n++)
 		       	{
		       	k = setbits(i, p, n);
        	 	printf("setbits(%u) = %u\n", i, k);
        		}
		}		
	}	
	return 0;
}
unsigned getbits(unsigned x, int p, int n)
{
	unsigned l;
	l=(x >>(p+1-n) & ~(~0 << n);
	return(l);
}
