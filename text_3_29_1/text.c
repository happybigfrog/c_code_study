#define _CRT_SECURE_NO_WARNINGS 1
//统计出字符串中英文字母、空格、数字和其他字符的个数
#include <stdio.h>
int main()
{
	char ch;
	int letter_num = 0;
	int space_num = 0;
	int digit_num = 0;
	int other_num = 0;
	printf("请输入字符串\n");
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
	printf("你所输入的字符中：英文字母有%d个，空格有%d个，数字有%d个，其他字符有%d个", letter_num, space_num, digit_num, other_num);
	return 0;
}