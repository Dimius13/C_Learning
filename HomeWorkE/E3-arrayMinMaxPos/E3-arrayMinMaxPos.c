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

int ArrMax (int array [], int sizeArr)
{
	int max, i;
	for (i=1, max = array[0]; i < sizeArr; i++)
	{
		if (max < array[i]) max = array[i];
	}
return max;
}

int PosMin (int array [], int sizeArr)
{
	int min, i, pos = 0;
	for (i=1, min = array[0]; i < sizeArr; i++)
	{
		if (min > array[i]) 
		{
			min = array[i];
			pos = i;
		}
	}
return pos;
}

int PosMax (int array [], int sizeArr)
{
	int max, i, pos = 0;
	for (i=1, max = array[0]; i < sizeArr; i++)
	{
		if (max < array[i]) 
		{
			max = array[i];
			pos = i;
		}
	}
return pos;
}


int main(void)
{
	int arrSize = 10;
	int arr[arrSize];
	InputArr(arr, arrSize);
	printf("%d ", PosMax(arr, arrSize)+1);
	printf("%d ", ArrMax(arr, arrSize));
	printf("%d ", PosMin(arr, arrSize) +1);
	printf("%d ", ArrMin(arr, arrSize));
	return 0;
}


