#define _CRT_SECURE_NO_WARNINGS 1
//ͳ�Ƴ��ַ�����Ӣ����ĸ���ո����ֺ������ַ��ĸ���
#include <stdio.h>
int main()
{
	char ch;
	int letter_num = 0;
	int space_num = 0;
	int digit_num = 0;
	int other_num = 0;
	printf("�������ַ���\n");
	while ((ch = getchar()) != '\n')
	{
		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
			letter_num++;
		else if (ch == ' ')
			space_num++;
		else if (ch >= '0' && ch <= '9')
			digit_num++;
		else
			other_num++;
	}
	printf("����������ַ��У�Ӣ����ĸ��%d�����ո���%d����������%d���������ַ���%d��", letter_num, space_num, digit_num, other_num);
	return 0;
}