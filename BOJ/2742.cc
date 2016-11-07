#include<stdio.h>

int main() 
{
	int i,a,j;
	scanf("%d", &a);
	j = a;
	for (i = 0; i < a; i++)
	{
		printf("%d\n", j);
		j--;
	}
	return 0;
}