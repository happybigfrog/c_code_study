#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

//------------------------------------------------------------------

//������
void menu()
{
	printf("******************************\n");
	printf("**     1.Add      2.Sub     **\n");
	printf("**     3.Mul      4.Div     **\n");
	printf("**     5.Xor      0.exit    **\n");
	printf("******************************\n");
}

int Add(int x, int y)
{
	return x + y;
}

int Sub(int x, int y)
{
	return x - y;
}

int Mul(int x, int y)
{
	return x * y;
}

int Div(int x, int y)
{
	return x / y;
}
int Xor(int x, int y)
{
	return x ^ y;
}

int main()
{
	int input = 0;
	int x = 0;
	int y = 0;
	//ת�Ʊ�pfArr�Ǻ���ָ������
	int(*pfArr[])(int, int) = { 0,Add,Sub,Mul,Div,Xor };
	do
	{
		menu();
		printf("��ѡ��>");
		scanf("%d", &input);
		if (input >= 1 && input <= 5)
		{
			printf("����������������:>");
			scanf("%d%d", &x, &y);
			int ret = pfArr[input](x, y);
			printf("%d\n", ret);
		}
		else if (input == 0)
		{
			printf("�˳�\n");
		}
		else
		{
			printf("�������\n");
		}
		
	} while (input);
	return 0;
}

//---------------------------------------------------------------

//char* my_strcpy(char* dest, const char* src);
////1.дһ������ָ��pf���ܹ�ָ��my_strcpy
////2.дһ������ָ������pfArr���ܹ����4��my_strcpy�����ĵ�ַ
//char* (*pf)(char*, const char*) = my_strcpy;
//char* (*pfArr[4])(char*, const char*) = { my_strcpy };

//---------------------------------------------------------------

//int Add(int x, int y) { return x + y; }
//int Sub(int x, int y) { return x - y; }
//int Mul(int x, int y) { return x * y; }
//int Div(int x, int y) { return x / y; }
//
//int main()
//{
//	//��Ҫһ�����飬���������Դ��4�������ĵ�ַ
//	int(*pa)(int, int) = Add;
//	int(*parr[4])(int, int) = { Add,Sub,Mul,Div };//����ָ�������
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d\n", parr[i](2, 3));
//	}
//	return 0;
//}

//-----------------------------------------------------------------

// void(*signal(int,void(*)(int)))(int)
//signal��һ����������
//signal�����Ĳ�����2������һ����int���ڶ����Ǻ���ָ�룬�ú���ָ��ָ��ĺ���������int����������void
//signal�����ķ�������Ҳ��һ������ָ�룺�ú���ָ��ָ��ĺ����Ĳ�����int������������void
//��
//typedef void(*pfun_t)(int);
//pfun_t signal(int, pfun_t);

//(*(void(*)())0)();
//��0ǿ������ת���ɣ�void(*)()����ָ������-0����һ�������ĵ�ַ
//����0��ַ���ĸú���