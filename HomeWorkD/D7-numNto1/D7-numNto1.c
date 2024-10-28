#include <stdio.h>

void NtoOne(int number)
{
	if (number > 0)
	{
		printf("%d ", number);
		NtoOne(number -1);
	}
}



int main(void)
{
	int number;
	scanf("%d", &number);
	NtoOne(number);
return 0;
}

