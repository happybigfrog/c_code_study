#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
enum opt
{
	add,sub,sul,dive
}op;
int main0501()
{
	srand((size_t)time(NULL));
	FILE* fp = fopen("D:/Àƒ‘Ú‘ÀÀ„.txt", "w");
	if (!fp)
		return -1;

	int a, b;
	char c;
	char* p = (char*)malloc(sizeof(char) * 20);

	for (int i = 0; i < 100; i++)
	{
		a = rand() % 10 + 1;
		b = rand() % 10 + 1; 
		switch (rand()%4)
		{
		case add:c = '+';break;
		case sub:c = '-';break;
		case sul:c = '*';break;
		case dive:c = '/';break;
		}
		memset(p, 0, 20);
		sprintf(p, "%d%c%d=\n", a, c, b);
		fputs(p, fp);
	}
	free(p);
	fclose(fp);
	return 0;
}