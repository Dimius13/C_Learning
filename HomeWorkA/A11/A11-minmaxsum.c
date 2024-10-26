
#include <stdio.h>

int main()
{
	int n1,n2,n3,n4,n5,min,max;
	scanf("%d %d %d %d %d", &n1, &n2, &n3, &n4, &n5);
	if (n1>n2)
		min = n2;
	else
		min = n1;
	if (min>n3) min = n3;
	if (min>n4) min = n4;
	if (min>n5) min = n5;
	
	//~ printf("%d\n", min);
	
	if (n1<n2)
		max = n2;
	else
		max = n1;
	if (max<n3) max = n3;
	if (max<n4) max = n4;
	if (max<n5) max = n5;
	
	//~ printf("%d\n", max);
	
	printf("%d\n", min+max);
		
	return 0;
}
