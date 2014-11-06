#include<stdio.h>
#include<string.h>
int lower(char s[],int n);
main()
{
	char s[100],i[100];
	int n=0;
	scanf("%s",s);
	while(i[n]!='\0')
	{
		i[n]=lower(s,n);
		printf("%c",i[n]);
		n++;
	}
}
int lower(char s[],int n)
{
	int lo;
	if(s[n]>='A'&&s[n]<='Z')
	{	
		lo=s[n]-'A'+'a';
	}
	return(lo);			
}
