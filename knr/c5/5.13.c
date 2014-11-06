#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define getline getline2
int getline(char *, int);
void tail(int n)
{
	int i, len;
	char buffer[BUFSIZ], **line, **lines;
	lines = malloc(n * sizeof(lines));
	line = lines;
	for (i = 0; i < n; i++) 
	{
		*line = NULL;
		line++;
	}
	while ((len = getline(buffer, BUFSIZ)) > 0) 
	{
		if (line - lines >= n) 
		{
			line -= n;
		}
		if (!*line)
		{
			*line = malloc(len);
		}
		else if (strlen(*line) < len)
		{
			*line = realloc(*line, len);
		}
		buffer[len - 1] = '\0';
		strcpy(*line, buffer);
		line++;
	}
	for (i = 0; i < n; i++) 
	{
		if (line - lines >= n) 
		{
			line -= n;
		}
		if (*line) 
		{
			printf("%s\n", *line);
			free(*line);
		}
		line++;
	}
	free(lines);
}

int main(int argc, char **argv)
{
	int count = 10;
	char *p;
	while (*++argv) 
	{
		p = *argv;
		if (*p++ == '-' && isdigit(*p)) 
		{
			count = atoi(p);
		}
	}
	tail(count);
	return 0;
}

int getline(char *s, int lim)
{
	int c;
	char *x = s;
	while (lim-- > 0 && (c = getchar()) != EOF && c != '\n') 
	{
		*x++ = c;
	}
	if (c == '\n')
	{
		*x++ = c;
	}
	*x = '\0';
	return (x - s);
}
