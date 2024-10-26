
#include <stdio.h>

int main(int argc, char **argv)
{
	int number, status=0;
	scanf("%d", &number);
	for (;number > 0;number /= 10)
	{
		if (number%10==9 && status ==1) 
		{
			status=2;
			break;
		}
		if (number%10==9) status=1;
	}
	status==1 ? printf("YES") : printf("NO");
	return 0;
}

