#include<stdio.h>
#include<string.h>
void htoi(char s1[],char s2[]);
void out(char p[]);
main()
{
	int st,j,h,temp;
	char s1[100],s2[100],i[100];
	printf("String1:");
	scanf("%s",s1);
	printf("string2:");
	scanf("%s",s2);
	h=strlen(s1);
		htoi(s1,s2);
}
void htoi(char s1[],char s2[])
{
	int i,j=0,k=0,l,t=0,p,a=0,n;
	j=strlen(s1);
	t=strlen(s2);
	while(k<=t)
	{
		for(l=0;l<=j;++l)
		{
			
			if(s1[l]==s2[k])
			{
				for(n=1;n<=j;n++)
				{

					s1[l+(n-1)]=s1[l+n];
				}
				l=t;
				j--;				
			}
		}
			k++;
	}
	s1[l+1]='\0';
	printf("string out:%s",s1);		
}
