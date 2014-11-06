#include<stdio.h>
#include<string.h>
int htoi(char s[]);
main()
{
	int i,st,p=16,temp;
	char s[100];
	scanf("%s",s);
	i=htoi(s);
	printf("%d",i);
}
int htoi(char s[])
{
	int i,j=0,n=0,a=0,dec,hex,k,ak,p=0;
	j=strlen(s)-1;
	//hex=s[2];
	for(k=0;k<=j;++k)
	{
		//++k;
		n=j;
		if(s[k]>='0'&&s[k]<='9')
		{
			hex=s[k]-'0';
			ak=hex;
		}
		else if('a'<=s[k]&&s[k]<='f')
		{
			hex=s[k]-'a'+10;
			dec=hex;
		}
		else if(s[k]>='A'&&s[k]<='F')
		{
			hex=s[k]-'A'+10;
			dec=hex;
		}
		
			//p=hex+p;
			p=(ak*16)+dec;
			//j--;
	}
return(p);
	
}
