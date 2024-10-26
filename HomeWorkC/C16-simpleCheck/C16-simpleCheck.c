#include <stdio.h>

int SimpleCheck (int number)
{
	int status = 1;
	if (number == 0) return 0;
	for (int i=2; i < number;i++)
		{
			if (number%i == 0) 
			{
				status = 0;
				break;
			}
		}
	if (number==1) status=0;
return status;
}


int main(void)
{
	int number;
	scanf("%d", &number);
	SimpleCheck(number) ? printf("YES") : printf("NO");
	return 0;
}
