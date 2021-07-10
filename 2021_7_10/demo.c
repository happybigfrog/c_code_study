#define _CRT_SECURE_NO_WARNINGS 1

//输入某年某月某日，判断这一天是这一年的第几天

#include <stdio.h>

int main()
{
	int year = 0, month = 0, day = 0, leap = 0, sum = 0;
	printf("请输入年、月、日，格式为：年,月,日(2020,02,20)\n");
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
	sum += day;//加上某天的天数
	if (month > 2 && leap == 1)//月份超过二月且闰年
		sum += leap;
	printf("这是这一年的第%d天\n", sum);
	return 0;
}
