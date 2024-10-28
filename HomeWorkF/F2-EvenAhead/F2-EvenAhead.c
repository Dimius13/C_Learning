
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

void sort_even_odd(int n, int a[])
{
	int i, j, tmp;
	for (i=0; i < n; i++)
	{
		if (a[i]%2 != 0)
		{
			for (j=i; j<n; j++)
			{
				if (a[j]%2 == 0)
				{
					while (j >i)
					{
						tmp = a[j-1];
						a[j-1] = a[j];
						a[j] = tmp;
						j--;
					}
				break;
				}
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
	//~ PrintArr(arr, arrSize);
	sort_even_odd(arrSize, arr);
	PrintArr(arr, arrSize);
	return 0;
}
