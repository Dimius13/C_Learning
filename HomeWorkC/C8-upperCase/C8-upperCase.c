#include <stdio.h>


int main(void)
{
	char c;
	while( (c=getchar())!='.')
		if(c>='a' && c<='z')
		putchar('A' + (c-'a'));
	else
		putchar(c);
return 0;
}