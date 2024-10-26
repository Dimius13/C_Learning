#include <stdio.h>

int main(int argc, char **argv)
{
	int month;
	scanf("%d", &month);
	if (month<3) printf("winter");
		else if (month==12) printf("winter");
			else if (month<6) printf("spring");
				else if (month<9) printf("summer");
					else if (month<11) printf("autumn");
	return 0;
}

