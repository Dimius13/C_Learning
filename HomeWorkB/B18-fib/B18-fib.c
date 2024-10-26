#include <stdio.h>

int main(void)
{
	int first = 0, second =1 , fibon, number;
	scanf("%d", &number);
	printf("%d ", second);
	for (int counter=1;counter<=number-1; counter++)
	{
		fibon = second+first;
		printf("%d ", fibon);
		first = second;
		second = fibon;
	}
	return 0;
}

