#define _CRT_SECURE_NO_WARNINGS 1

//����ĳ��ĳ��ĳ�գ��ж���һ������һ��ĵڼ���

#include <stdio.h>

int main()
{
	int year = 0, month = 0, day = 0, leap = 0, sum = 0;
	printf("�������ꡢ�¡��գ���ʽΪ����,��,��(2020,02,20)\n");
	scanf("%d,%d,%d", &year, &month, &day);
	if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
		leap = 1;
	else
		leap = 0;
	switch (month)
	{
	case 1:sum = 0; break;
	case 2:sum = 31; break;
	case 3:sum = 59; break;
	case 4:sum = 90; break;
	case 5:sum = 120; break;
	case 6:sum = 151; break;
	case 7:sum = 181; break;
	case 8:sum = 212; break;
	case 9:sum = 243; break;
	case 10:sum = 273; break;
	case 11:sum = 304; break;
	case 12:sum = 334; break;
	default:printf("data error\n"); break;
	}
	sum += day;//����ĳ�������
	if (month > 2 && leap == 1)//�·ݳ�������������
		sum += leap;
	printf("������һ��ĵ�%d��\n", sum);
	return 0;
}
