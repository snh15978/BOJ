#include <stdio.h>

int main() {

	int cnt, a, b, mul, rem = 0;

	scanf("%d", &cnt);

	while (cnt--) {

		mul = 1;

		scanf("%d %d", &a, &b);

		for (int i = 0; i < b; i++) {
			mul = mul*a;
			mul = mul % 10;
		}

		if (mul != 0) {
			printf("%d\n", mul);
		}
		else printf("10\n");
	}
	return 0;
}
