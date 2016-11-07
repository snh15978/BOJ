#include <stdio.h>

int arr1[2][100000], arr2[2][100001];

int max(int a, int b) {
	return (a > b ? a : b);
}

int main() {

	int t, n, data;
	int i, j;
	scanf("%d", &t);

	while (t--) {
		scanf("%d", &n);
		for (i = 0; i < 2; i++) {
			for (j = 0; j < n; j++) {
				scanf("%d", &data);
				arr1[i][j] = data;
			}
		}
		arr2[0][0] = arr2[1][0] = 0;
		arr2[0][1] = arr1[0][0];
		arr2[1][1] = arr1[1][0];


		for (i = 2; i <= n; i++) {
			printf("1: %d + %d\n", max(arr2[1][i - 1], arr2[1][i - 2]), arr1[0][i-1]);
			arr2[0][i] = max(arr2[1][i - 1], arr2[1][i - 2]) + arr1[0][i-1];
			printf("2: %d + %d\n", max(arr2[0][i - 1], arr2[0][i - 2]), arr1[1][i-1]);
			arr2[1][i] = max(arr2[0][i - 1], arr2[0][i - 2]) + arr1[1][i-1];
		}
		printf("%d\n", max(arr2[0][n], arr2[1][n]));
	}
	return 0;
}