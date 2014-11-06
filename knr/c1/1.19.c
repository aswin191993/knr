#include <stdio.h>

int get(char line[], int maxline);
void reverse(char to[], int max);
main()
{
	int MAXLINE=100;
	int len,a,i;
	int max;
	char line[MAXLINE];
	char longest[MAXLINE];
	while((getchar())!=EOF){
	max=0;
	while ((len = get(line, MAXLINE)) > 0){
		if (len >= max) {
		max = len;
	}
	if (max >= 0){
	reverse(line,max);

}
}
}
}
int get(char s[],int lim){
	int c, i,a;
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i){
		if(i==0){
			s[i]=' ';
		i++;
		}
		s[i]=c;
		if(c=='\n'){
		s[i]=c;
		}
	}
		s[i] = '\0';
		return i;
}
void reverse(char to[],int max)
{	
	int i;
	for(i=max;i>=0;--i){
	printf("%c", to[i]);
	}
}
