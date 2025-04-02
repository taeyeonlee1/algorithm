#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int arr[1000];
    int temp; 
    int n;
    int sum = 0;
    int sum1 = 0;

    scanf("%d", &n);

    for (int p = 0; p < n; p++)
    {
        scanf("%d", &arr[p]);
    }
    

    for (int i = 0; i < n; i++) {

        for (int j = 0; j < n-1-i; j++) {

            if (arr[j] > arr[j + 1]) {

                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
        
    for (int i = 0; i < n; i++)
    {
        
        sum = sum+ arr[i];
        sum1 = sum1+sum;
        
        
    }

    printf("%d", sum1);


    
}
