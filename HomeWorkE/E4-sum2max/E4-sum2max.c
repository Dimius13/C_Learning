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

int ArrTwoMaxSum (int array [], int sizeArr)
{
	int max1, max2, i;
	for (i=1, max1 = array[0], max2 = array[1]; i < sizeArr; i++)
	{
		if (max1 < array[i]) 
		{
			max2 = max1;
			max1 = array[i];
			continue;
		}
		if (max2 < array[i]) 
		{
			max2 = array[i];;
		}
	}
return max1+max2;
}

int main(void)
{
	int arrSize = 10;
	int arr[arrSize];
	InputArr(arr, arrSize);
	printf("%d", ArrTwoMaxSum(arr, arrSize));
	return 0;
}
