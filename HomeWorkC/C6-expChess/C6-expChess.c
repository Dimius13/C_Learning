#include <stdio.h>
#include <stdint.h>


uint64_t Chess(int n,int p)
{
	int i = 0;
	uint64_t result = 1;
	while (i<(p-1))
	{
		result *= n;
		i++;
	}
return result;
}

int main(void)
{
	int number;
	scanf("%d", &number);
	printf("%ju", Chess(2, number));
	return 0;
}
