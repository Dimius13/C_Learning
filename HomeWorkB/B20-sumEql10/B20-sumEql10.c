#include <stdio.h>

int main(void)
{
	int number, sum;
	scanf ("%d", &number);
	for (sum = 0; number>0;number /= 10)
		{
			sum += number%10;
		}
	sum == 10 ? printf("YES") : printf("NO");
	return 0;
}

