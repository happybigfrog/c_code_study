#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main0301()
{
	FILE* fp1 = fopen("D:/解密.txt", "r");
	FILE* fp2 = fopen("D:/加密.txt", "w");
	if (!fp1 && !fp2)
		return -1;
	char ch;
	while ((ch = fgetc(fp1)) != EOF)
	{
		ch++;
		fputc(ch, fp2);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}

int main0302()
{
	FILE* fp1 = fopen("D:/加密.txt", "r");
	FILE* fp2 = fopen("D:/解密文件.txt", "w");
	if (!fp1 || !fp2)
		return -1;
	char ch;
	while ((ch = fgetc(fp1)) != EOF)
	{
		ch--;
		fputc(ch, fp2);
	}

	fclose(fp1);
	fclose(fp2);
	return 0;
}