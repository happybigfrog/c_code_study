#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	//返回1，小端
	//返回0，大端
	return *p;
}//指针类型定义：
//1.指针类型决定了指针解引用操作符能访问几个字节：char*p;*p访问了1个字节，int*p；*p访问了4个字节
//2.指针类型决定了指针+1、-1，加的或减的是几个字节；char*p；p+1跳过一个字符；int* p；p+1跳过4个字节

//写一段代码告诉我们当前机器的字节序是什么
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端");
	}
	else
	{
		printf("大端");
	}
	return 0;
}