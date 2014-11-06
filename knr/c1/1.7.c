#include<stdio.h>
main()
{
	char a;
	while((a=getchar())!=EOF){
		printf("\nvale of EOF:%d\n",EOF);
		putchar(a);
	}
}
