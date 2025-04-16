#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
	int n[9][9];
	int M = 0;
	int rememberi;
	int rememberj;

	for (int i = 0; i < 9; i++)
	{
		for (int j = 0; j < 9; j++)
		{
			scanf("%d", &n[i][j]);
			if (n[i][j] > M) {
				M = n[i][j];
				rememberi = i;
				rememberj = j;
			}
			else if (n[i][j] == M) {
				M = n[i][j];
				rememberi = i;
				rememberj = j;
			}
			

		}
		
	}

	printf("%d\n%d %d", M, rememberi+1, rememberj+1);
	
}

