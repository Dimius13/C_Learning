#include <stdio.h>

int main(int argc, char **argv)
{
	int number, status=0;
	for (scanf("%d", &number);number > 0;number /= 10)
	{
			if (number%2>0 || number==0)
			{
				status = 1;
				break;
			}
	}
	status==1 ? printf("NO") : printf("YES");
	return 0;
}

