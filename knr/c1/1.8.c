#include<stdio.h>
main()
{
	char a;
	int n=0,t=0,s=0,ot=0;
	while((a=getchar())!=EOF){
		if(a == '\n'){
			++n;
		}
		else if(a == '\t'){
			++t;
		}
		else if(a == ' '){
			++s;
		}
		else
		++ot;
	printf("\nnew line no:%d\nblanks no:%d\ntabs no:%d\nothers no:%d\n",n,s,t,ot); 
		putchar(a);
	}
}
