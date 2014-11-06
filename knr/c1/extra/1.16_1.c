#include <stdio.h>
#define MAXLINE 1000

int getline(char line[100], int maxline);
void copy(char to[100], char from[100]);
int main(void)
{
  int len;               /* current line length */
  int max;               /* maximum length seen so far */
  char line[MAXLINE];    /* current input line */
  char longest[MAXLINE]; /* longest line saved here */

  max = 0;

  while((len = getline(line, MAXLINE)) > 0)
  {
    printf("%d: %s", len, line);

    if(len > max)
    {
      max = len;
      copy(longest, line);
    }
  }
  if(max > 0)
  {
    printf("Longest is %d characters:\n%s", max, longest);
  }
  printf("\n");
  return 0;
}
int getline(char s[],int lim){
	int c, i;
	for (i=0; i < lim-1 && (c=getchar())!=EOF && c!='\n'; ++i){
	s[i] = c;
	}
	if (c == '\n') {
		s[i] = c;
		++i;
	}
	s[i] = '\0';
	return i;
}
