#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//손톱까끼

int main()
{
    int n;
    int m;
    int a[100];
    int b[100];
    int c;
    int d;
    int temp =0;
    
    //12345
    scanf("%d %d", &n ,&m);

    for (int j = 1; j <= n; j++)
    {
        a[j] = j;
    }

    for (int i = 0; i < m; i++)
    {
        scanf("%d %d", &c, &d);
        

        temp = a[c];
        a[c] = a[d];
        a[d] = temp;
        

        
    }

    for (int p = 1; p <= n; p++) {
        printf("%d ", a[p]);
    }
   



}

