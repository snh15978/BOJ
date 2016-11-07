#include <stdio.h>
int main() {
	int n,i,j,temp;

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
	temp = n-1;
	for (i = 1; i <= n; i++) {
		for (j = 1; j <= i;j++) {
			printf(" ");
		}
		for (j = 2 * temp - 1; j > 0;j--) {
			printf("*");
		}
		temp--;
		printf("\n");

	}

	return 0;
}