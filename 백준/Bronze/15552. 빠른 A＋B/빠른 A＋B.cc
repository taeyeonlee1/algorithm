#include <stdio.h>

int main()
{
	int T, a[1000000], b[1000000];
	int i;

	scanf("%d", &T);
	for (i = 0; i < T; i++)
	{
		scanf("%d %d", &a[i], &b[i]);

	}

	for (i = 0; i < T; i++)
	{
		printf("%d\n",a[i] + b[i]);
	}
	


}