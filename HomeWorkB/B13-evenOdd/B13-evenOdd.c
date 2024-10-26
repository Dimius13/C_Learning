#include <stdio.h>

int main(int argc, char **argv)
{
	int number, evenCounter = 0, oddCounter = 0;
	for (scanf("%d", &number); number > 0;number /=10)
	{
		if (number%2>0) oddCounter++;
		else evenCounter++;
	}
	printf("%d %d", evenCounter, oddCounter);
	return 0;
}

