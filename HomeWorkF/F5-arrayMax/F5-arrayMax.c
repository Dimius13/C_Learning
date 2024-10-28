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


int find_max_array(int size, int a[])
{
	int max, i;
	for (i=1, max = a[0]; i < size; i++)
	{
		if (max < a[i]) max = a[i];
	}
return max;
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
	int arrSize = 5;
	int arr[arrSize];
	InputArr(arr, arrSize);
	PrintArr(arr, arrSize);
	find_max_array(arrSize,arr);
	//~ PrintArr(arr, arrSize);
	return 0;
}
