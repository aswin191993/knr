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
	max = 0;
	while((getchar())!=EOF){
	while ((len = get(line, MAXLINE)) > 0){
		if (len > max) {
		max = len;
		//copy(longest, line);
	}
	if (max > 0){
	printf("\n%s%d\n", line,max);
	max=0;
	}
}	return 0;
}
}
int get(char s[],int lim){
	int c, i;
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i){
		if(c==' '){
		s[i--];
		}
		if(c!=' '){
		s[i] = c;
		}
	}
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
