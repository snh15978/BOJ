#include<stdio.h>

int main() 
{
	int i,a,j,cnt;
	scanf("%d", &a);
	cnt = a;
	for (i = 0; i < a; i++)
	{
		for (j = cnt; j > 0; j--)
		{
			printf("*");
		}
		cnt--;
		printf("\n");
	}
	return 0;
}