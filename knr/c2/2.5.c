#include<stdio.h>
#include<string.h>
int htoi(char s1[],char s2[]);
main()
{
	int st,j,h,temp;
	char s1[100],s2[100],i[100];
	printf("String1:");
	scanf("%s",s1);
	printf("string2:");
	scanf("%s",s2);
	h=strlen(s1);
	j=htoi(s1,s2);
	printf("first location:%d",j);
}
int htoi(char s1[],char s2[])
{
	int i,j=0,k=0,l,t=0,p,a=0,n=0;
	j=strlen(s1);
	t=strlen(s2);
	while(k<=t)
	{
		for(l=0;l<=j;++l)
		{
			
			if(s1[l]==s2[k])
			{
			n=l;
			return l;				
			}
		}
			k++;
	}
	if(n!=0)
	{
		return -1;
	}		
}
