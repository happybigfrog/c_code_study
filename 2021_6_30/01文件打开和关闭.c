#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main01()
{
	FILE* fp = fopen("D:/a.txt", "r");
	if (fp == NULL)
	{
		//1.找不到文件
		//2.文件权限（读 写 执行）
		//3.程序打开文件超出上限 65535
		printf("文件打开失败！\n");
		return -1;
	}
	printf("文件打开成功:%p",fp);

	fclose(fp);
	return 0;
}