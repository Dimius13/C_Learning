#include <stdio.h>

int main(int argc, char **argv)
{
	int inp, max=0;
	scanf("%d", &inp);
	max = inp%10;
	inp =inp/10;
	if (max<(inp%10)) max = inp%10;
	inp =inp/10;
	if (max<(inp%10)) max = inp%10;
	printf("%d\n", max);
	return 0;
}

