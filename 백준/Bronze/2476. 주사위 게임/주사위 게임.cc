#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
	int n[1000];
	int m[1000];
	int h[1000];
	int a;
	int sum[1000];
	int Max = 0;

	scanf("%d", &a);

	for (int i = 0; i < a; i++)
	{
		scanf("%d %d %d", &n[i], &m[i], &h[i]);

		if (n[i] == m[i] && m[i] == h[i]) sum[i] = 10000 + n[i] * 1000;
		else if (n[i] == m[i] || m[i] == h[i]) sum[i] = 1000 + m[i] * 100;
		else if (n[i] == h[i] || m[i] == h[i]) sum[i] = 1000 + h[i] * 100;
		else if (n[i] == m[i] || n[i] == h[i]) sum[i] = 1000 + n[i] * 100;
		else if (n[i] > m[i] && n[i] > h[i]) {
			if (n[i] != m[i] && h[i] != m[i]) sum[i] = n[i] * 100;
		}
		else if (m[i] > n[i] && m[i] > h[i]) {
			if (n[i] != m[i] && h[i] != m[i]) sum[i] = m[i] * 100;
		}
		else if (h[i] > m[i] && h[i] > n[i]) {
			if (n[i] != m[i] && h[i] != m[i]) sum[i] = h[i] * 100;
		}
		
	}

	for (int j = 0; j < a; j++)
	{
		if (sum[j] > Max) Max = sum[j];
	}

	printf("%d", Max);



}