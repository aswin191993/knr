#include <stdio.h>

int main() {
        int c;
      	while ((c = getchar()) != EOF) {
	
                if (c != '\t'||c != ' ') {
                        putchar(c);
                       
                }
		if(c=='\t'||c==' '){
			if(c==' '){
				printf("\\s");
				}
			else if(c=='\t'){
			printf("\\t");
		}
		
		}
        }
}
