#include<stdio.h>
#include<string.h>
void escape(char s1[],char s2[]);
main()
{
	char s1[100],s2[100];
	int n=0;
	printf("string1:");
	scanf("%s",s1);
	printf("string2:");
	scanf("%s",s2);
	escape(s1,s2);
}
void escape(char s1[],char s2[])
{
	int i,j=0;
	for(i=0;s2[i]<'\0';i++)
	{

		switch(s2[i])
		{
			case '\n':
			{
				s1[j++]='\\';
				s1[j++]='n';
			}
			case '\t':
			{
				s1[j++]='\\';
				s1[j++]='t';
			}
			default:
			{
				s1[j++]=s2[i];
			}
		}
	printf("%s",s2);
	}
}	
