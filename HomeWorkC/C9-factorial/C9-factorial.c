#include <stdio.h>
//~ #include <stdint.h>

unsigned long int factorial(int n)
{
	unsigned long int result=1;
	for (int i = 2; i <= n; i++)
		result *= i; 
return result;
}

int main(void)
{
	int number;
	scanf("%d", &number);
	printf("%lu", factorial(number));
return 0;
}
