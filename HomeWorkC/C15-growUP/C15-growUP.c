#include <stdio.h>

int grow_up(int n)
{
	for(;n>0; n /= 10)
	{
		if ((n/10)%10 >= n%10) return 0;
	}
	return 1;
}

int main()
{
	int number;
	scanf("%d", &number);
	grow_up(number) ? printf("YES") : printf("NO");
	return 0;
}

