#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int main()
{
    int n;
    int m;
    int a[100];
    int b[100];
    int c[100];
    int s[101] = {0};

    scanf("%d %d", &n, &m);
    for (int i = 0; i < m; i++)
    {
        scanf("%d %d %d", &a[i], &b[i], &c[i]);
        
        for (int p = a[i]; p <= b[i]; p++)
        {
            s[p] = c[i];
        }
        
    }

    
    for (int j = 1; j <= n; j++)
    {
        printf("%d ", s[j]);
    }
    
}

