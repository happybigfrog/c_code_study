#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main01()
{
	FILE* fp = fopen("D:/a.txt", "r");
	if (fp == NULL)
	{
		//1.�Ҳ����ļ�
		//2.�ļ�Ȩ�ޣ��� д ִ�У�
		//3.������ļ��������� 65535
		printf("�ļ���ʧ�ܣ�\n");
		return -1;
	}
	printf("�ļ��򿪳ɹ�:%p",fp);

	fclose(fp);
	return 0;
}