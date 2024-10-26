#include <stdio.h>

int is_digit()
{
	int sum = 0;
	char c;
	while( (c=getchar())!='.')
	{
		if(c>='0' && c<='9')
		sum += c - '0';
	}
return sum;
}

int main(void)
{
	printf("%d", is_digit());
return 0;
}
