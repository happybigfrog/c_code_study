#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//------------------------------------------------------------------

//计算器
void menu()
{
	printf("******************************\n");
	printf("**     1.Add      2.Sub     **\n");
	printf("**     3.Mul      4.Div     **\n");
	printf("**     5.Xor      0.exit    **\n");
	printf("******************************\n");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}
int Xor(int x, int y)
{
	return x ^ y;
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	//转移表：pfArr是函数指针数组
	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		if (input >= 1 && input <= 5)
		{
			printf("请输入两个操作数:>");
			scanf("%d%d", &x, &y);
			int ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("退出\n");
		}
		else
		{
			printf("输入错误\n");
		}
		
	} while (input);
	return 0;
}

//---------------------------------------------------------------

//char* my_strcpy(char* dest, const char* src);
////1.写一个函数指针pf，能够指向my_strcpy
////2.写一个函数指针数组pfArr，能够存放4个my_strcpy函数的地址
//char* (*pf)(char*, const char*) = my_strcpy;
//char* (*pfArr[4])(char*, const char*) = { my_strcpy };

//---------------------------------------------------------------

//int Add(int x, int y) { return x + y; }
//int Sub(int x, int y) { return x - y; }
//int Mul(int x, int y) { return x * y; }
//int Div(int x, int y) { return x / y; }
//
//int main()
//{
//	//需要一个数组，这个数组可以存放4个函数的地址
//	int(*pa)(int, int) = Add;
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//函数指针的数组
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}

//-----------------------------------------------------------------

// void(*signal(int,void(*)(int)))(int)
//signal是一个函数声明
//signal函数的参数有2个，第一个是int，第二个是函数指针，该函数指针指向的函数参数是int返回类型是void
//signal函数的返回类型也是一个函数指针：该函数指针指向的函数的参数是int，返回类型是void
//简化
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);

//(*(void(*)())0)();
//把0强制类型转换成：void(*)()函数指针类型-0就是一个函数的地址
//调用0地址处的该函数