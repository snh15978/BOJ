#include<stdio.h>

int main() 
{
	int a, b;
	int cnt;
	scanf("%d\n", &cnt);

	while (cnt--) {
		scanf("%d %d\n", &a, &b);
		printf("%d\n", a + b);
	}
	return 0;
}