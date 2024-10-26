
#include <stdio.h>

int main()
{
	int n1,n2,n3,max;
	scanf("%d %d %d", &n1, &n2, &n3);
	if (n1<n2)
		max = n2;
	else
		max = n1;
	
	if (max<n3)
		printf("%d", n3);
	else
		printf("%d", max);
		
	return 0;
}
