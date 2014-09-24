#include <stdio.h>
int val(int d);
int main() {
        int c, p=0, s=0, t=0, u=0;
	while ((c = getchar()) != EOF) {
	if (c == '\t') { 
		p=1;             
                if(p == 1){
		printf("\\t");
                       }
                else if (s == 0){
                     putchar(c);
		         
                        }
                }
		if (c !='\t'){
			val(c);
			s=0;
			p=0;
		}
	else if (c == ' ') { 
		t=1;             
                if(t == 1){
		printf("n");
                       }
                else if (u == 0){
                     putchar(c);
		         
                        }
                }		
                if (c != ' ') {
                        val(c);
		        t=0;                 
                        u=0; 
             
		}
        }
return(0);
}
int val(int c)
{
putchar(c);
return(0);
}
