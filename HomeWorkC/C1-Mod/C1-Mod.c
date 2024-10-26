#include <stdio.h>

int Mod (int a)
{
	if (a<0) a*= -1;
return a;
}

int main(void)
{
	int number;
	scanf("%d", &number);
	printf("%d", Mod(number));
	return 0;
}
