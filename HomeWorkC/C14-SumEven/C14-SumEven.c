#include <stdio.h>


int SumEven(int a)
{
	int sum =0;
	for (; a > 0; a /=10)
	{
	sum += a%10;
	}
	return (sum % 2 == 0);
}

int main(void)
{
	int number;
	scanf("%d", &number);
	SumEven(number) ? printf("YES") : printf("NO");
	return 0;
}
