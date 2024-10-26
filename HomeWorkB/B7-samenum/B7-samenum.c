#include <stdio.h>

int main(int argc, char **argv)
{
	int number, num_other, num_carrent, status=0;
	scanf("%d", &number);
	for (;number>0;number /=10)
	{
		num_carrent = number%10;
		num_other = number/10;
			for (; num_other>0;num_other /=10)
			{
				if (num_carrent==num_other%10) status=1;
			}
	}
	status==1 ? printf("YES"): printf("NO");
	return 0;
}

