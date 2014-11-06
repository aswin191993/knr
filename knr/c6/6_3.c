#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define MAX 100
#define SIZE 100

struct tnode{
	char* word;
	int count;
	int linenum[MAX];
	struct tnode* left;
	struct tnode* right;
};
struct tnode *talloc(void)
{
	return (struct tnode *) malloc(sizeof(struct tnode));
}
int line = 1;
struct tnode* addtree(struct tnode* p, char* w)
	{
	int cond;

	if(p==NULL)
	{
		p=talloc();
		p->word = strdup(w);
		p->count = 1;
		p->linenum[p->count] = line;
		p->left = p->right = NULL;
	}
	else if((cond=strcmp(w, p->word))==0)
		p->linenum[p->count++] = line;
	else if(cond<0)
		p->left = addtree(p->left, w);
	else
		p->right = addtree(p->right, w);

	return p;
}
void treeprint(struct tnode* p)
{
	int i;

	if(p!=NULL)
	{
		treeprint(p->left);
		printf("%d %s:\n", p->count, p->word);
		for(i=1; i<=p->count; i++)
		{
			printf("Line %d\n", p->linenum[i]);
		}
		treeprint(p->right);
	}
}
int getword(char* word, int lim)
{
	int c, getch(void);
	void ungetch(int);
	char* w = word;

	while(isspace(c=getch()))
		;
	if(c!=EOF)
		*w++ = c;
	if(!isalpha(c))
	{
		if(c=='\n')
			line++;
		*w = '';
		return 0;
	}
	for( ; --lim>0; w++)
		if(!isalnum(*w=getch()))
		{
			ungetch(*w);
			break;
		}
	*w= ''; 
	return word[0];
}
char buf[SIZE];
int bufp = 0;
int getch(void)
{
    return (bufp > 0) ? buf[--bufp] : getchar();
}
void ungetch(int c)
{
	if (bufp >= SIZE)
    	    	printf("ungetch: too many characters\n");
    	else
        	buf[bufp++] = c;
}


