#include <stdio.h>
struct name{
   int a;
   int b;
}
struct add(struct name *ptr)
{
        int add=((*ptr).a+(*ptr).b);
        
};
main(){
        struct name *ptr,p;
	struct add ad;
        ptr=&p;     
        p.a=4;
        p.b=6;
       // printf("add:%d\n",ad(&p));    
}


