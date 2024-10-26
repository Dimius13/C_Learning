#include <stdio.h>

int FuncX (int x)
{
	int result;
	if (x < -2) 
	{
		result =4;
		return result;
	}
	if (x >= 2)
	{
		result = x*x+4*x+5;
		return result;
	}
	else result = x*x;
return result;
}

int main(void)
{
	int number, maximum=0;
	do
	{
		scanf("%d", &number);
		if (maximum < FuncX(number)) maximum = FuncX(number);
	}
	while (number != 0);
	printf("%d", maximum);
	return 0;
}
