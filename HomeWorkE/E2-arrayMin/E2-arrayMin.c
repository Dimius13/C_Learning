#include <stdio.h>

int InputArr (int array [], int sizeArr)
{
	int i;
	for (i =0; i < sizeArr; i++)
	{
		scanf("%d", &array[i]);
	}
return i;
}

int ArrMin (int array [], int sizeArr)
{
	int min, i;
	for (i=1, min = array[0]; i < sizeArr; i++)
	{
		if (min > array[i]) min = array[i];
	}
return min;
}

int main(void)
{
	int arrSize = 5;
	int arr[arrSize];
	InputArr(arr, arrSize);
	printf("%d", ArrMin(arr, arrSize));
	return 0;
}

