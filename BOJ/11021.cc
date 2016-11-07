#include<stdio.h>

int main()
{
	int a, b;
	int cnt;
	scanf("%d\n", &cnt);
	for(int i=1;i<=cnt;i++) {
		scanf("%d %d\n", &a, &b);
		printf("Case #%d: %d\n",i, a + b);
	}
	return 0;
}