#include <stdio.h>

int ToN (int n)
{
	long int result;
	result = (n+1)*n/2;
return result;
}

int main(void)
{
	int number;
	scanf("%d", &number);
	printf("%d", ToN(number));
	return 0;
}
