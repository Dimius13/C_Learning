#include <stdio.h>

int main(int argc, char **argv)
{
	int number,counter=0;
	do
	{
		scanf("%d", &number);
		counter++;
	}
	while (number != 0);
	printf("%d", counter-1);
	return 0;
}

