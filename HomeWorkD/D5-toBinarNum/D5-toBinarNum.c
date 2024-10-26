#include <stdio.h>

int TransponP (int a, int b, int exponent)
{
	if (a<b) return a*exponent; 
return a%b*exponent+TransponP(a/b, b, exponent*10);
}

int main(void)
{
	int number, targetCount = 2;
	scanf("%d", &number);
	printf("%d\n", TransponP(number, targetCount, 1));

	
	return 0;
}
