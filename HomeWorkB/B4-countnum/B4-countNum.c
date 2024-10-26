
#include <stdio.h>

int main(int argc, char **argv)
{
	int number, i;
	scanf( "%d", &number);
	for (i = 0; number>0;)
	{
		i++;
		number = number/10;
	}
	if (i==3) printf("YES");
		else printf("NO");
	return 0;
}

