#define _CRT_SECURE_NO_WARNINGS 1

//��һ�����ӣ��ӳ�����3������ÿ������
//һ�����ӣ�С���ӳ���3���º�����һ����
//�ӣ��������Ӷ���������ÿ������������Ϊ����
// 1 1 2 3 5 8 13 쳲���������
#include <stdio.h>
int main()
{
	int f1 = 1;
	int f2 = 1;
	for (int i = 1; i <= 20; i++)
	{
		printf("%12d %12d", f1, f2);
		if (i % 2 == 0)printf("\n");
		f1 = f1 + f2;
		f2 = f1 + f2;
	}

	return 0;
}
