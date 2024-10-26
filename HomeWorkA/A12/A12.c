#include <stdio.h>

int main(int argc, char **argv)
{
	int inp, sum=0;
	scanf("%d", &inp);
	sum = inp%10;
	inp =inp/10;
	sum += inp%10;
	inp =inp/10;
	sum += inp%10;
	printf("%d\n", sum);
	return 0;
}

