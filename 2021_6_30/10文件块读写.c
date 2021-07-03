#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main1001()
{
	FILE* fp = fopen("d:/c.txt", "wb");
	if (!fp)
		return -1;

	int a = 5678;
	fwrite(&a, sizeof(int), 1, fp);

	fclose(fp);
	return 0;
}

int main()
{
	FILE* fp = fopen("d:/c.txt", "rb");
	if (!fp)
		return -1;

	int value;
	fread(&value, sizeof(int), 1, fp);
	printf("%d\n", value);

	fclose(fp);
	return 0;
}