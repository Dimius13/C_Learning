#include <stdio.h>

int main(int argc, char **argv)
{
	int x1, y1, x2, y2;
	float k, b;
	scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
	b = (1.*y1*x2-1.*y2*x1)/(1.*x2-1.*x1);
	k = (1.*y2-1.*b)/(1.*x2);
	printf("%.2f %.2f", k, b);
	return 0;
}

