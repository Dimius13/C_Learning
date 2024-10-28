#include <stdio.h>
#include <string.h>

void NumCount(char number[],int arr[])
{
	int i, stringsize;
	stringsize = strlen(number);
	for (i=0; i<= stringsize; i++)
	{
		switch (number[i]-48)
		{
			case 0:
				arr[0]++;
				continue;
			case 1:
				arr[1]++;
				continue;
			case 2:
				arr[2]++;
				continue;
			case 3:
				arr[3]++;
				continue;
			case 4:
				arr[4]++;
				continue;
			case 5:
				arr[5]++;
				continue;
			case 6:
				arr[6]++;
				continue;
			case 7:
				arr[7]++;
				continue;
			case 8:
				arr[8]++;
				continue;
			case 9:
				arr[9]++;
				continue;
		}
	}
}

void PrintArr (int array [], int sizeArr)
{
	for (int i =0; i < sizeArr; i++)
	{
		printf("%d ", array[i]);
	}
return;
}

int main(void)
{
	char number[1000];
	scanf("%s", number);
	int arr[10] = {0};
	NumCount(number, arr);
	for (int i =0; i<10; i++)
		{
			if (arr[i] > 0) printf("%d %d\n", i, arr[i]);
		}
	return 0;
}
