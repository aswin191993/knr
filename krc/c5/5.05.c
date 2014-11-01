#include <stdio.h>

char *strncpy(char *s, const char *t, size_t n)
{
	char *x = s;
	while (n-- > 0 && (*x++ = *t++))
	;
	*x = 0;
	return s;
}
char *strncat(char *s, const char *t, size_t n)
{
	char *x = s;
	while (*x)
	x++;
	while (n-- > 0 && (*x++ = *t++))
	;
	*x = 0;
	return s;
}

int strncmp(const char *s, const char *t, size_t n)
{
	while (--n > 0 && *s && (*s == *t))
	{
		s++, t++;
	}
	return (*s - *t);
}

int main()
{
	char t[20];
	const char *x = "hello c!";
	const char *y = "hello world!!!";
	char *s = (char *)&t;
	strncpy(s, "hello ", 6);
	printf("s=%s\n", s);
	strncat(s, "world!helloworld!", 6);
	printf("s=%s\n", s);
	printf("strcmp(s, \"%s\", 5)=%d\n", x, strncmp(s, x, 5));
	printf("strcmp(s, \"%s\", 6)=%d\n", x, strncmp(s, x, 6));
	printf("strcmp(s, \"%s\", 7)=%d\n", x, strncmp(s, x, 7));
	printf("strcmp(s, \"%s\", 13)=%d\n", y, strncmp(s, y, 13));
	return 0;
}
