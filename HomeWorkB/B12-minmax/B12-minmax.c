#include <stdio.h>

int main(int argc, char **argv)
{
	int number, max, min;
	scanf("%d", &number);
	for (min = number%10, max = number%10; number > 0;number /=10)
	{
	if (min>number%10) min = number%10;
	if (max<number%10) max = number%10;
	}
	printf("%d %d", min, max);
	return 0;
}

