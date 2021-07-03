#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main0201()
{
	FILE* fp = fopen("D:/a.txt", "r");
	if (!fp)
	{
		printf("文件打开失败\n");
	}

	//文件的字符读取
	//文件默认结尾为-1
	char ch = fgetc(fp);
	printf("%c\n", ch);
	//不能修改文件指针，在读取时光标流会自动向下移动
	ch = fgetc(fp);
	printf("%c\n", ch);
	ch = fgetc(fp);
	printf("%c\n", ch);
	ch = fgetc(fp);
	printf("%c\n", ch);

	//关闭文件
	fclose(fp);
	return 0;
}

int main0202()
{
	FILE* fp = fopen("D:/a.txt", "r");
	if (!fp)
		return -1;
	char ch;
	while ((ch = fgetc(fp)) != EOF)
	{
		printf("%c", ch);
	}
	fclose(fp);
	return 0;
}

int main0203()
{
	FILE* fp = fopen("D:/b.txt", "w");
	if (!fp)
		return -1;
	char ch = 'a';
	//字符写入
	fputc(ch, fp);

	fclose(fp);
	return 0;
}