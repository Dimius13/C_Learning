#include <stdio.h>

int main(int argc, char **argv)
{
	int number, prev_number, status=0;
	scanf("%d", &number);
	for (prev_number=0; number>0;)
	{
		prev_number = number%10;
		number /= 10;
		if (number%10==prev_number)status=1;
	}
	if (status==1) printf("YES");
	if (status==0) printf("NO");
	return 0;
}

