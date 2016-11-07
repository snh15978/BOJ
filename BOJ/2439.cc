#include<stdio.h>

int main() 
{
	int i, j,k,cnt;
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

	return 0;
}