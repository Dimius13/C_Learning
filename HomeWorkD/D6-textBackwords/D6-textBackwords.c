#include <stdio.h>

void reverse_string()
{
	char c;
	c = getchar();
	if (c != '.')
	{
		reverse_string();
		putchar(c);
	}
}



int main(void)
{

	reverse_string();
return 0;
}

