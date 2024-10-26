#include <stdio.h>

int SimpleCheck (int number)
{
	int status = 1;
	for (int i=2; i < number;i++)
		{
			if (number%i == 0 ) 
			{
				status = 0;
				break;
			}
		}
	if (number==1) status=0;
return status;
}


void print_simple(int n)
{
	for (int i = 2; i <= n;)
	{
		if (n%i == 0 && SimpleCheck(i)==1)
		{
			printf("%d ", i);
			n /= i;
			i = 2;
			continue;
		}
		i++;
	}
return;
}


int main(void)
{
	int number;
	scanf("%d", &number);
	print_simple(number);
	return 0;
}

