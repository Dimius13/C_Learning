#include <stdio.h>

int BackOrd (int number)
{
	if (number > 0)
	{
		BackOrd(number/10);
	}
	if (number == 0) return 0;
	printf("%d ", number%10);
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


