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

float AverageAr (int array [],int sizeArr)
{
	float average = 0;
	int i, sum = 0;
	for (i = 0; i < sizeArr; i++)
	{
		sum += array[i];
	}
	average = sum/(float)sizeArr;
return average;
}


int main(void)
{
	int arrSize = 5;
	int arr[arrSize];
	InputArr(arr, arrSize);
	printf("%.3f", AverageAr(arr, arrSize));
	return 0;
}

