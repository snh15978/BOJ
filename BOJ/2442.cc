#include <stdio.h>
int main() {
	int n,i,j;

	scanf("%d", &n);


	for(j=1;j<=n;j++){
		for (int k = n-j; k > 0;k--) {
			printf(" ");
		}
		for (i = 0; i < 2 * j - 1;i++) {
			printf("*");
		}
		printf("\n");
	}

	return 0;
}