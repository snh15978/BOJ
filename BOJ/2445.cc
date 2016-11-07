#include <stdio.h>
int main() {
	int cnt, i, j,temp;

	scanf("%d", &cnt);
	temp = cnt;
	for (i = 1; i <= cnt; i++) {
		for(int j=0;j<i;j++){
			printf("*");
		}
		for (j = temp; j > 1; j--) {
			printf("  ");
		}
		temp--;
		for (int j = 0; j<i; j++) {
			printf("*");
		}
		printf("\n");
	}

	temp = cnt-1;
	for (i = 1; i <= cnt; i++) {
		for (int j =temp; j>0; j--) {
			printf("*");
		}
		for (j = 0; j < i; j++) {
			printf("  ");
		}
		for (int j = temp; j>0; j--) {
			printf("*");
		}
		temp--;
		printf("\n");
	}
	return 0;
}