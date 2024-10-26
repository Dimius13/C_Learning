#include <stdio.h>

int main(int argc, char **argv)
{
	int inp, mult=0;
	scanf("%d", &inp);
	mult = inp%10;
	inp =inp/10;
	mult *= inp%10;
	inp =inp/10;
	mult *= inp%10;
	printf("%d\n", mult);
	return 0;
}

