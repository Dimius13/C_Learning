#include <stdio.h>

int is_digit()
{
	int counter = 0;
	char c;
	while( (c=getchar())!='.')
	{
		if(c>='0' && c<='9')
		counter++;
	}
return counter;
}

int main(void)
{
	printf("%d", is_digit());
return 0;
}
