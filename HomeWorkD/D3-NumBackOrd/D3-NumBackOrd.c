#include <stdio.h>

int BackOrd (int number)
{
	if (number > 0)
	{
		printf("%d ", number%10);
		number /= 10;
		BackOrd(number);
	}
return 0;
}

int main()
{
	int number;
	scanf("%d", &number);
	if (number == 0) printf("%d", number);
	BackOrd(number);
	return 0;
}

