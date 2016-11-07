#include<stdio.h>

int main() 
{
	int i, j,cnt;
	scanf("%d", &cnt);

	for (i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", cnt, i, cnt*i);

	}
	return 0;
}