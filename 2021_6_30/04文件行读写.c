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
	//feof(�ļ�ָ��)    �ж��ļ��Ƿ񵽴��β		�����ж��ı��ļ�Ҳ�����ж϶������ļ�
	//������ļ���β����ֵΪ��0
	//���û���ļ���β����ֵΪ0
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
	char ch[] = "���ɶ\0����զ��";
	fputs(ch, fp);

	fclose(fp);
	return 0;
}