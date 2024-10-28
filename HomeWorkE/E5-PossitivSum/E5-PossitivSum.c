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

int PositArrSum (int array [], int sizeArr)
{
	int i, sum = 0;
	for (i =0; i < sizeArr; i++)
	{
		if (array[i] > 0) sum += array[i];
	}
return sum;
}

int main(void)
{
	int arrSize = 10;
	int arr[arrSize];
	InputArr(arr, arrSize);
	printf("%d", PositArrSum(arr, arrSize));
	return 0;
}

