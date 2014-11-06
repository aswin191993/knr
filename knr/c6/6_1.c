int getword(char *word, int lim)
{
    	int c, getch(void);
    	void ungetch(int);
    	char *w = word;
    	*w = '\0';
    	while (isspace(c = getch()))
        	;
    	if (c != EOF)
		 *w++ = c;
    	if(c == '/')
	{
        	if((c = getch()) == '*' || c == '/')
		{
            		*w++ = c;
            		*w = '\0';
            		return FOUND;
        	}
        	else
		{
        		word = '\0';
            		ungetch(c);
           	 	return c;
        	}
    	}
   	if(c == '"')
	{
        	if((c = getch()) == ',' || c == ';' || c == ')')
		{
            		*w = '\0';
         	   	ungetch(c);
	 	}
        	else
		{
            		word = '\0';
            		ungetch(c);
           		 return c;
        	}
    	}
    	if (!isalpha(c))
	{
        	word = '\0';
        	return c;
    	}
    	for ( ; --lim > 0; w++){
    		if (!isalnum(*w = getch()))
		{
        		ungetch(*w);
        		break;
		}
	}
	*w = '\0';
	return FOUND
}
int getch(void)
{
	return (bufp > 0) ? buf[--bufp] : getchar();
}
void ungetch(int c)
{
    	if (bufp >= BUFSIZE)
        	printf("ungetch: too many characters\n");
    	else
        	buf[bufp++] = c;
}
main()
{
	int n;
       	char word[MAXWORD];
	while (getword(word, MAXWORD) != EOF)
       		   if (isalpha(word[0]))
        		       if ((n = binsearch(word, keytab, NKEYS)) >= 0)
                   			keytab[n].count++;
       	for (n = 0; n < NKEYS; n++)
       	  	 if (keytab[n].count > 0)
              		 printf("%4d %s\n",
              	    	 keytab[n].count, keytab[n].word
	return 0;
}
