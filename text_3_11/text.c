#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int Add(int x, int y)
{
	int z = 0;
	z = x + y;
	return z;
}
//����ָ��--��ź�����ַ��ָ��
int main()
{
	int a = 10;
	int b = 20;
	printf("%d\n", Add(a, b));
	//&������ �� ������ ���Ǻ����ĵ�ַ
	printf("%p\n", Add);
	printf("%p\n", &Add);
	int(*pa)(int, int) = Add;
	printf("%d\n", (*pa)(2, 3));
	return 0;
}

//---------------------------------------------------------------
//�������������ʽ
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
//������ָ�����ʽ
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

//����ָ��
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	//arr-��Ԫ�ص�ַ
//	//&arr[0]-��Ԫ�ص�ַ
//	//&arr-�����ַ
//	int(*p)[10] = &arr;
//	//�����p��������ָ��
//	return 0;
//}

//---------------------------------------------------------------
//ָ������
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
//	const char* p = "abcdef";//"abcdef"��һ�������ַ�������a�ĵ�ַ������p
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}