#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int main08()
{
	srand((size_t)time(NULL));
	FILE* fp = fopen("D:/Êý¾Ý.txt", "w");
	if (!fp)
		return -1;
	for (int i = 0; i < 1000; i++)
	{
		fprintf(fp, "%d\n", rand() % 256);
	}
	fclose(fp);
	return 0;
}