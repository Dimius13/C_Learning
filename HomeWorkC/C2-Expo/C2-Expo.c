#include <stdio.h>

int power(int n,int p)
{
	int i = 0, result = 1;
	while (i<p)
	{
		result *= n;
		i++;
	}
return result;
}

int main(void)
{
	int number, expon;
	scanf("%d %d", &number, &expon);
	printf("%d", power(number, expon));
	return 0;
}
