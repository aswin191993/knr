#include <stdio.h>

int main() {
        int c, p, s, cnt;
        p=0;
        s=0;
	cnt=1;
	while ((c = getchar()) != EOF) {
	if (c == ' ') {              
                if(p == 1){
		++cnt;
		p=0;
                }
		}
                if (c != ' '){
		p=1; 
                }
	printf("\nword count:%d\n",cnt);
        }
}
