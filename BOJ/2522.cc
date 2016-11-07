#include <stdio.h>
int main() {
	int i, j, k, cnt,a;
	scanf("%d", &cnt);

	for (i = 1; i <= cnt; i++)
	{
		for (j = 0; j < cnt - i; j++)
		{
			printf(" ");
		}
		for (k = 0; k < i; k++)
		{
			printf("*");
		}
		printf("\n");
	}
	a = cnt-1;
	for (i = 1; i < cnt; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}
		for (k = a; k > 0; k--)
		{
			printf("*");
		}
		a--;
		printf("\n");
	}

	return 0;
}