#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main()
{
    long long int n, m;
    long long int sum;

    scanf("%lld %lld", &n, &m);

    sum = n - m;

    if (n - m < 0) sum = sum * -1;
    
    printf("%lld", sum);
}



