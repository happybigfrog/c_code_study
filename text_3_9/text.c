#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int check_sys()
{
	int a = 1;
	char* p = (char*)&a;
	//����1��С��
	//����0�����
	return *p;
}//ָ�����Ͷ��壺
//1.ָ�����;�����ָ������ò������ܷ��ʼ����ֽڣ�char*p;*p������1���ֽڣ�int*p��*p������4���ֽ�
//2.ָ�����;�����ָ��+1��-1���ӵĻ�����Ǽ����ֽڣ�char*p��p+1����һ���ַ���int* p��p+1����4���ֽ�

//дһ�δ���������ǵ�ǰ�������ֽ�����ʲô
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��");
	}
	else
	{
		printf("���");
	}
	return 0;
}