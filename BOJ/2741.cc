#include<stdio.h>

int main() 
{
	int i,a,j=1;
	scanf("%d", &a);

	for (i = 0; i < a; i++)
	{
		printf("%d\n", j);
		j++;
	}
	return 0;
}