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
	int c, i,a,nxt=0,b=0,d=0,e=0;
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i){
		if(c=='{'){
			++b;
		}
		if(c=='}'){
			--b;
		}
		if(c=='['){
			++d;
		}
		if(c==']'){
			--d;
		}
		if(c=='('){
			++e;
		}
		if(c==')'){
			--e;
		}
		if(b!=0||d!=0||e!=0){
			s[i]='1';
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
		if(to[i]=='1'){
	printf("error");
	}
}
}
