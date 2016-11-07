#include<stdio.h>

int main() {

	int d[46];
	int n;

	scanf("%d", &n);
	d[0] = 0;
	d[1] = 1;
	for (int i = 2; i <= 45; i++) {
		d[i] = d[i - 1] + d[i - 2];
	}

	printf("%d\n", d[n]);
	return 0;
}