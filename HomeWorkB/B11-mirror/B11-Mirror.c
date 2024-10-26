#include <stdio.h>

int main(int argc, char **argv)
{
	int number, new_number = 0;
	for (scanf("%d", &number); number > 0;)
	{
		new_number +=number%10;
		number /=10;
		if (number == 0) break;
		new_number *=10;
	}
	printf("%d", new_number);
	return 0;
}

