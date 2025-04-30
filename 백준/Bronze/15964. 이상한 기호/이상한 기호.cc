#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum;

int ky(int a, int b)
{
	sum = (a + b) * (a - b);
	return sum;
}
int main()
{
	int n, m;
	scanf("%d %d", &n, &m);

	ky(n, m);
	printf("%d", sum);

}

