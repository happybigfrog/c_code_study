#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#define SIZE 1000

void Bubble_sort(int* arr, int len)
{
	for (int i = 0; i < len-1; i++)
	{
		for (int j = 0; j < len-1-i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main0901()
{
	FILE* fp1 = fopen("d:/数据.txt", "r");
	FILE* fp2 = fopen("d:/数据冒泡版排序.txt", "w");
	if (!fp1 || !fp2)
		return -1;
	int* arr = (int*)malloc(sizeof(int) * SIZE);
	for (int i = 0; i < 1000; i++)
	{
		fscanf(fp1, "%d\n", &arr[i]);
	}
	Bubble_sort(arr, SIZE);
	for (int i = 0; i < SIZE; i++)
	{
		fprintf(fp2, "%d\n", arr[i]);
	}

	free(arr);
	fclose(fp1);
	fclose(fp2);
	return 0;
}

int main0902()
{
	FILE* fp1 = fopen("d:/数据.txt", "r");
	FILE* fp2 = fopen("d:/数据插入版排序.txt", "w");
	if (!fp1 || !fp2)
		return -1;

	int* arr = (int*)malloc(sizeof(int) * 256);
	memset(arr, 0, sizeof(int) * 256);

	for (int i = 0; i < 1000; i++)
	{
		int value;
		fscanf(fp1, "%d\n", &value);
		arr[value]++;//将数据的个数放在对应的下标里
	}

	for (int i = 0; i < 256; i++)
	{
		for (int j = 0; j < arr[i]; j++)
		{
			fprintf(fp2, "%d\n", i);
		}
	}

	free(arr);
	fclose(fp1);
	fclose(fp2);
	return 0;
}