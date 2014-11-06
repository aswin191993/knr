#include<stdio.h>
main()
{	
	int i,yr=2000;
	float s;
	for(i=0;i<=300;i++){
		++yr;
		s=(yr%4);
		if(s==0){
			printf("%d\n",yr);
		}
	}
}
