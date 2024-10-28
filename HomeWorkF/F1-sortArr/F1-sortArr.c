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

void sort_array(int size, int a[])
{
	int i, j, tmp;
	for (i=0; i < size; i++)
	{
		for (j=i; j<size; j++)
		{
			if (a[i] > a[j])
			{
				 tmp = a[i];
				 a[i] = a[j];
				 a[j] = tmp;
			}
		}
	}
return;
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
	sort_array(arrSize, arr);
	PrintArr(arr, arrSize);
	return 0;
}
