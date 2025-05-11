#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	unsigned int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	if (a + b + c <= 21) printf("1");
	else printf("0");
}