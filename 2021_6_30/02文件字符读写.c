#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main0201()
{
	FILE* fp = fopen("D:/a.txt", "r");
	if (!fp)
	{
		printf("�ļ���ʧ��\n");
	}

	//�ļ����ַ���ȡ
	//�ļ�Ĭ�Ͻ�βΪ-1
	char ch = fgetc(fp);
	printf("%c\n", ch);
	//�����޸��ļ�ָ�룬�ڶ�ȡʱ��������Զ������ƶ�
	ch = fgetc(fp);
	printf("%c\n", ch);
	ch = fgetc(fp);
	printf("%c\n", ch);
	ch = fgetc(fp);
	printf("%c\n", ch);

	//�ر��ļ�
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
	//�ַ�д��
	fputc(ch, fp);

	fclose(fp);
	return 0;
}