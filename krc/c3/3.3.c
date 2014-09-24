#include <stdio.h>
#include <string.h>
void expand(char s1[], char s2[]);
main()
{
	char s1[1000],s2[1000];
	char result[100];
	int i = 0;
	printf("input string:");
	scanf("%s",s1);
	expand(s1,s2);
}
void expand(char s1[],char s2[])
{	
	int i,j;
	char c;
	i=0,j=0;
	for(i=0;s1[i]!='\0';i++)
	{
		if('a'<=s1[i])
		{
			//while(s1[i]>='z')
			//{
					
				s2[j]=s1[i];
				j++;
			//}
		}
		//else
		//s2[j++]=s1[i++];
	}
	s2[j++]='\0';
	printf("string:%s",s2);	
}		
