#include<stdio.h>

int main() 
{
	int i, j,k,a,cnt;
	scanf("%d", &cnt);
	a = cnt;
	for (i = 0; i < cnt; i++)
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