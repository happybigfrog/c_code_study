#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main0401()
{
	FILE* fp = fopen("D:/a.txt", "r");
	if (!fp)
		return -1;
	char* p = (char*)malloc(sizeof(char) * 100);
	memset(p, 0, 100);
	fgets(p, 100, fp);
	printf("%s\n", p);
	free(p);
	fclose(fp);
	return 0;
}

int main0402()
{
	FILE* fp = fopen("D:/a.txt", "r");
	if (!fp)
		return -1;
	char* p = (char*)malloc(sizeof(char) * 100);
	//feof(文件指针)    判断文件是否到达结尾		可以判断文本文件也可以判断二进制文件
	//如果到文件结尾返回值为非0
	//如果没到文件结尾返回值为0
	while (!feof(fp))
	{
		memset(p, 0, 100);
		fgets(p, 100, fp);
		printf("%s", p);
	}

	free(p);
	fclose(fp);

	return 0;
}

int main0403()
{
	FILE* fp = fopen("D:/b.txt", "w");
	if (!fp)
		return -1;
	char ch[] = "你瞅啥\0瞅你咋地";
	fputs(ch, fp);

	fclose(fp);
	return 0;
}