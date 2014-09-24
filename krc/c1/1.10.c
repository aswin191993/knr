#include <stdio.h>

int main() {
        int c, p, s,i,j,k,l;
        p=0;
        s=0;
	i=0;
	j=0;
	k=0;
	l=0;
	while ((c = getchar()) != EOF) {
	if (c == '\t') {
		p=1;             
                if(p == 1){
                       p=0;
                       s=1;  
			printf("/t");  
                        }
                if (s == 0){
                     putchar(c);   
                        }
                }
	if (c == '\\') {
		i=1;             
                if(i == 1){
                       i=0;
                       j=1;  
			printf("/");  
                        }
                if (j == 0){
                     putchar(c);   
                        }
                }
                if (c != '\t') {
                        putchar(c);
                        p=0;                 
                        s=0; 

                if (c != '\\') {
                        putchar(c);
			i=0;
			j=0;
		}
               }
        }
}
	
