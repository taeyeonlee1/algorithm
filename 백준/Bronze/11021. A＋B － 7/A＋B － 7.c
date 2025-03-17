#include <stdio.h>

int main()
{
	int T, a[100], b[100];
	int i;

	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%d %d", &a[i], &b[i]);

	}

	for (i = 0; i < T; i++)
	{
		printf("Case #%d: %d\n", i+1, a[i] + b[i]);
	}
	


}