#include <stdio.h>

int main(int argc, char **argv)
{
		int num, i=1;
	scanf("%d", &num);
	while (i<num+1)
	{
		printf("%d %d %d\n", i, i*i, i*i*i);
		i++;
	}
	return 0;
}

