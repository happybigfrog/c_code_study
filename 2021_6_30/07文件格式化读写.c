#define _CRT_SECURE_NO_WARNINGS 1
//#pragma warning(disable:4996)
#include <stdio.h>
int main0701()
{
	FILE* fp = fopen("D:/a.txt", "r");
	if (!fp)
		return -1;
	char* p = (char*)malloc(sizeof(char) * 100);
	fscanf(fp, "%s", p);
	printf("%s\n", p);
	free(p);
	fclose(fp);
	return 0;
}

int main0702()
{
	FILE* fp = fopen("d:/b.txt", "w");
	if (!fp)
		return -1;
	char ch[] = "hello world";
	fprintf(fp, "%s", ch);

	fclose(fp);
	return 0;
}

int main0703()
{
	srand((size_t)time(NULL));
	FILE* fp = fopen("d:/四则运算.txt", "w");
	if (!fp)
		return -1;

	int a, b;
	char c;
	for (int i = 0; i < 100; i++)
	{
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;
		switch (rand() % 4)
		{
		case 0:c = '+'; break;
		case 1:c = '-'; break;
		case 2:c = '*'; break;
		case 3:c = '/'; break;
		}
		fprintf(fp, "%d%c%d=\n", a, c, b);
	}
	fclose(fp);
	return 0;
}

int main0704()
{
	FILE* fp1 = fopen("d:/四则运算.txt","r");
	FILE* fp2 = fopen("d:/四则运算结果.txt","w");
	if (!fp1 || !fp2)
	{
		printf("打开文件失败\n");
		return -1;
	}
	
	int a, b, sum;
	char c;

	for (int i = 0; i < 100; i++)
	{
		fscanf(fp1, "%d%c%d=\n", &a, &c, &b);
		switch (c)
		{
		case '+':sum = a + b; break;
		case '-':sum = a - b; break;
		case '*':sum = a * b; break;
		case '/':sum = a / b; break;
		}
		fprintf(fp2, "%d%c%d=%d\n", a, c, b, sum);
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}