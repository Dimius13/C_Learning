#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, i, sum=0;
	scanf("%d %d", &a,&b);
	i =a;
	while (i<=b)
	{
		sum += i*i;
		i++;
	}
		printf("%d ",sum);
	return 0;
}

