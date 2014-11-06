#include <stdio.h>
struct name{
   int a;
   int b;
};
int add(struct name *ptr)
{
	int add=((*ptr).a+(*ptr).b);
	return add;
}
main(){
	struct name *ptr,p;
	ptr=&p;     
	p.a=4;
	p.b=6;
	printf("add:%d\n",add(&p));    
}
