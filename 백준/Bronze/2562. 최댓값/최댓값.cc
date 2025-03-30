#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int a[9];
	int M = 0;
	int c = 0;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &a[i]);
	}

	for (int j = 0; j < 9; j++)
	{
		if (M < a[j]) c = j;
		if (M < a[j]) M = a[j];
		
	}

	printf("%d\n%d", M, c+1);
}