#include <stdio.h>

int main(void)
{
	int number, status = 0;
	scanf ("%d", &number);
	for (int i=2; i < number;i++)
		{
			if (number%i == 0 ) 
			{
				status = 1;
				break;
			}
		}
	if (number==1) status=1;
	status == 1 ? printf("NO") : printf("YES");
	return 0;
}

