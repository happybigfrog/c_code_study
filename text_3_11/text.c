#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
//函数指针--存放函数地址的指针
int main()
{
	int a = 10;
	int b = 20;
	printf("%d\n", Add(a, b));
	//&函数名 和 函数名 都是函数的地址
	printf("%p\n", Add);
	printf("%p\n", &Add);
	int(*pa)(int, int) = Add;
	printf("%d\n", (*pa)(2, 3));
	return 0;
}

//---------------------------------------------------------------
//参数是数组的形式
//void Print1(int arr[3][5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//}
//参数是指针的形式
//void Print2(int(*p)[5], int x, int y)
//{
//	int i = 0;
//	for (i = 0; i < x; i++)
//	{
//		int j = 0;
//		for (j = 0; j < y; j++)
//		{
//			printf("%d ", *(*(p + i) + j));
//			printf("%d ", p[i][j]);
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	int arr[3][5] = { {1,2,3,4,5},{2,3,4,5,6},{3,4,5,6,7} };
//	Print1(arr, 3, 5);
//	Print2(arr, 3, 5);
//	return 0;
//}

//---------------------------------------------------------------

//int main()
//{
//	char* arr[5];
//	char* (*pa)[5] = &arr;
//	return 0;
//}

//数组指针
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//arr-首元素地址
//	//&arr[0]-首元素地址
//	//&arr-数组地址
//	int(*p)[10] = &arr;
//	//上面的p就是数组指针
//	return 0;
//}

//---------------------------------------------------------------
//指针数组
//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 2,3,4,5,6 };
//	int arr3[] = { 3,4,5,6,7 };
//	int* parr[] = { arr1,arr2,arr3 };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 5; j++)
//		{
//			printf("%d ", *(parr[i] + j));
//		}
//		printf("\n");
//	}
//	return 0;
//}

//-----------------------------------------------------------------

//int main()
//{
//	const char* p = "abcdef";//"abcdef"是一个常量字符串，将a的地址赋给了p
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}