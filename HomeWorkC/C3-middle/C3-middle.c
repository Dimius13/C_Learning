#include <stdio.h>

int middle(int a, int b)
{
	float result;
	result =(a+b)/2;

return result;
}

int main(void)
{
	int number1, number2;
	scanf("%d %d", &number1, &number2);
	printf("%d", middle(number1, number2));
	return 0;
}
