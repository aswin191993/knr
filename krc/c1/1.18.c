#include <stdio.h>

int get(char line[], int maxline);
void copy(char to[], char from[]);
main()
{
	int MAXLINE=100;
	int len,a;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	while((getchar())!=EOF){
	max=0;
	while ((len = get(line, MAXLINE)) > 0){
		if (len >= max) {
		max = len;
		//copy(longest, line);
	}
	if (max >= 0){
	printf("\n%s%d\n", line,max);
	}
}	return 0;
}
}
int get(char s[],int lim){
	int c, i,a;
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i){
		if(c==' '){
		i--;
		a=1;
		}
		if(c!=' '){
		s[i] = c;
		}
	}
	if(a==1){
		a=0;
		return(a);
	}
	else
		s[i] = '\0';
		return i;
}
/*void copy(char to[], char from[])
{
	int i;
	i = 0;
	while ((to[i] = from[i]) != '\0')
		++i;
}*/
