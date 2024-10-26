#include <stdio.h>

int CheckOrder()
{
	int sum = 0;
	char c;
	while( (c=getchar())!='.')
	{
		if(c=='(') sum++;
		if(c==')') sum--;
		if (sum < 0) return 1;
	}
return sum;
}

int main(void)
{
	CheckOrder() > 0 ? printf("NO") : printf("YES");
return 0;
}
