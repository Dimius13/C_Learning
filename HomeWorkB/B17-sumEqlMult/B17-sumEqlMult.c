#include <stdio.h>

int main(void)
{
	int number, sum, mult, tmp=0;
	scanf("%d", &number);
	for (int i=10;i<=number;i++)
	{
		tmp = i;
		for (sum = 0, mult =1; tmp>0;tmp /= 10)
		{
			sum += tmp%10;
			mult *= tmp%10;
		}
		if (sum == mult) printf("%d ", i);

	}
	return 0;
}

