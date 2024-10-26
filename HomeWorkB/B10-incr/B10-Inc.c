#include <stdio.h>

int main(int argc, char **argv)
{
	int number, status=0, NumGreater;
	for (scanf("%d", &number);number > 0;)
	{
		NumGreater = number%10;
		number /= 10;
		if (NumGreater<=number%10)
		{
			status = 1;
			break;
		}
	}
	status==1 ? printf("NO") : printf("YES");

	return 0;
}

