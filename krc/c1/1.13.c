#include <stdio.h>
main() {
        int c,i;
	scanf("%d",&c);
	while ((getchar()) != EOF) {
		for(i=0;i<c;i++){
			printf("- ");
		}
        }
}
