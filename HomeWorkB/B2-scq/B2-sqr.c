#include <stdio.h>

int main(int argc, char **argv)
{
	int a, b, i;
	scanf("%d %d", &a,&b);
	i =a;
	while (i<=b)
	{
		printf("%d ",i*i);
		i++;
	}
	return 0;
}

