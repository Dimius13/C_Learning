#include <stdio.h>


int nod(int a, int b)
	{
	while (a > 0 && b > 0)
	{
		a > b ? a%=b : (b%=a);
	}
	printf("%d\n", !a ? b : a);
return 0;
}

int main(void)
{
	int number1, number2;
	scanf("%d %d", &number1, &number2);
	nod(number1, number2);
	return 0;
}
