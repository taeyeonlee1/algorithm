#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main() {
	int start, end;
	int answer = 0;
	int count = 0;
	int a;
	int sum = 0;

	scanf("%d", &start);

	for (int i = 1; i <= start; i++) {
		scanf("%d", &a);

		for (int j = 1; j <= a; j++) {
			if (a >= 2) {
				float ouu = double(a / j);
				if (j * ouu == a) count++;
			}
		}
		if (count == 2) sum++;
		count = 0;
		}
	printf("%d", sum);
}