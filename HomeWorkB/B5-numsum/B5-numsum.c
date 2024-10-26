#include <stdio.h>

int main(int argc, char **argv)
{
	int number, sum;
	scanf("%d", &number);
	for (sum =0; number>0; )
	{
		sum += number%10;
		number = number/10;
	}
	printf("%d", sum);
	return 0;
}

