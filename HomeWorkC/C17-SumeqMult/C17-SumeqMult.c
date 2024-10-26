#include <stdio.h>

int is_happy_number(int number)
{
	int sum = 0, mult = 1;
	for (; number > 0; number /= 10)
	{
		sum += number%10;
		mult *= number%10;
	}
return (sum==mult);
}


int main(void)
{
	int number;
	scanf("%d", &number);
	is_happy_number(number) ? printf("YES") : printf("NO");
	return 0;
}

