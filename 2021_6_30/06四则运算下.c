#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main0601()
{
	FILE* fp1 = fopen("D:/��������.txt", "r");
	FILE* fp2 = fopen("D:/����������.txt", "w");
	if (!fp1 || !fp2)
	{
		printf("���ļ�ʧ��");
		return -1;
	}

	int a, b, sum;
	char c;
	char* p = (char*)malloc(sizeof(char) * 20);

	for (int i = 0; i < 100; i++)
	{
		memset(p, 0, 20);
		fgets(p, 20, fp1);
		sscanf(p, "%d%c%d=\n", &a, &c, &b);
		switch (c)
		{
		case '+':sum = a + b; break;
		case '-':sum = a - b; break;
		case '*':sum = a * b; break;
		case '/':sum = a / b; break;
		}
		memset(p, 0, 20);
		sprintf(p, "%d%c%d=%d\n", a, c, b, sum);
		fputs(p, fp2);
	}
	free(p);
	fclose(fp1);
	fclose(fp2);
	return 0;
}