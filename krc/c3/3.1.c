#include<stdio.h>
#include<string.h>
void escape(char s1[],char s2[]);
main()
{
	char s1[100],s2[100];
	int n=0;
	printf("string1:");
	scanf("%s",s1);
	escape(s1,s2);
}
void escape(char s1[],char s2[])
{
	int i=0,j=0,k;
	k=strlen(s1);
	for(i=0,j=0;s1[i]!='\0';++i)
	{
		s2[j]=s1[i];
		j++;
	}
	s2[j]='\0';
	i=j=0;	
	while(s2[i]!='\0')
	{
		switch(s2[i])
		{
			case '\n':
			{
				s1[j++]='\\';
				s1[j++]='n';
				break;
			}
			case '\t':
			{
				s1[j++]='\\';
				s1[j++]='t';
				break;
			}
			default:
			{
				s1[j]=s2[i];
				break;
			}
		}
	j++;
	i++;
	}
	//s2[j]='\0';
	printf("%s",s1);
	
}		
