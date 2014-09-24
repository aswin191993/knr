#include<stdio.h>
#include<string.h>
int stringdex(char s[],char t[]);
main()
{
	char t[1000],s[100];
	int line;
	printf("enter line:");
	scanf("%s",t);
	printf("enter search string:");
	scanf("%s",s);
	line=stringdex(s,t);
	printf("location:%d",line);
}
int stringdex(char s[],char t[])
{
	int i=0,j,len,k=0;
	char temp[1000];
	len=strlen(t);
	j=len;
	while(t[i]!='\0')
	{
				
		temp[--j]=t[i++];
		
	}	
	temp[len]='\0';
	for(i=0;temp[i]!='\0';++i)
	{
		for(j=0;s[j]!='\0';++j)
		{
			if(temp[i]==s[j])
			{
				return(k=(len-i));
			}
		}
	}
	if(k==0)
	{
		return -1;
	}	
	printf("%s\n",s);
}
		
		
