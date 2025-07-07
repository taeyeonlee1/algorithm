#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <string.h>

int main() {
	int n;
	int m;
	char a[100];
	scanf("%d", &n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		scanf(" %s", &a);
		int l = strlen(a);
		for (int j = 0; j < l; j++) {
			for (int p = 0; p < m; p++) {
				printf("%c", a[j]);
			}


		}

		printf("\n");
	}

}