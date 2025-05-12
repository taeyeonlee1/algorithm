#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int n = 0;
	int a, b;
	int count = 0;
	long long int sum;
	int j = 0;
	
	scanf("%d", &n);
	
	for (int i = 0; i < n; i++)
	{
		scanf("%d %d", &a, &b);
		sum = 1;
		if (a == 0 && b==0) sum = 0;

	
		for (int p = 0; p < b; p++)
		{
			sum = a * sum;
			if (sum == 10) sum = sum;
			else if(sum>10) sum = sum % 10;
		}

		if (sum == 0) sum = 10;

		printf("%lld\n", sum);
	}

	
}