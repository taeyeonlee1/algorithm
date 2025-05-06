#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a[10];
	int result[10];
	int temp = 0;
	int count = 0;

	

	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &a[i]);
		result[i] = a[i] % 42;
	}

	for (int i = 0; i < 10; i++) {

		for (int j = 0; j < 9 - i; j++) {

			if (result[j] > result[j + 1]) {

				temp = result[j];
				result[j] = result[j + 1];
				result[j + 1] = temp;
			}
		}
	}

	for (int p = 0; p < 10; p++)
	{
		if (result[p] != result[p + 1]) count++;
	}

	printf("%d", count);
}


