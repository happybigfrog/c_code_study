#define _CRT_SECURE_NO_WARNINGS 1

//有一对兔子，从出生后3个月起每个月生
//一对兔子，小兔子长到3个月后又生一对兔
//子，假如兔子都不死，问每个月兔子总数为多少
// 1 1 2 3 5 8 13 斐波拉契数列
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
