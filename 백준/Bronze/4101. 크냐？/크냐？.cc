#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int a[100];
	int b[100];
	int i = 0;
	int count = 0;

	for (int i = 0; ; i++)
	{
		scanf("%d %d", &a[i], &b[i]);
		if (a[i] > b[i]) printf("Yes\n");
		else if (a[i] < b[i]) printf("No\n");
		
		if (a[i] == 0 && b[i] == 0) break;
		else if (a[i] == b[i]) printf("No\n");
		count++;
	}

	
	
}


