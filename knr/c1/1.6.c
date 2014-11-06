#include<stdio.h>
main()
{
	char a;
	while((a=getchar())!=EOF){
		if(((a=getchar())!=EOF)==1)
			{
				printf("value=1\n");
			}
		else
			printf("value=0\n");
	putchar(a);
	}
}
