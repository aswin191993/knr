#include <stdio.h>

int get(char line[], int maxline);
void print(char to[], int max);
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
	print(line,max);

}
}
}
}
int get(char s[],int lim){
	int c, i,a,nxt=0;
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i){
		if(c=='\t'){
			s[i]=' ';
			nxt++;
			}
		else{
			s[i]=c;
		}
		if(nxt==2){
			s[i] = '\0';
			c=(getchar()==EOF); 
			}
		if(c=='\n'){
			s[i]='\n';
		}
	}
		s[i] = '\0';
		return i;
}
void print(char to[],int max)
{	
	int i;
	for(i=0;i<=max;i++){
	printf("%c", to[i]);
	}
}
