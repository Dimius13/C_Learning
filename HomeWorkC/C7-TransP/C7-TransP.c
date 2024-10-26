#include <stdio.h>

int TransponP (int a, int b)
{
	int exponent = 1, newNumber=0;
	if (a<b) return a; 
	while (a >= b)
	{
		newNumber += a % b * exponent;
		a = a/b;
		exponent *= 10;
		if (a<b) newNumber = newNumber + a*exponent;
	}
return newNumber;
}

int main(void)
{
	int number, targetCount;
	scanf("%d %d", &number, &targetCount);
	printf("%d\n", TransponP(number, targetCount));

	
	return 0;
}
