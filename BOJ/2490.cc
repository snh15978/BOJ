#include <iostream>

using namespace std;

int main() {

	int a,b,c,d,sum;

	for (int i = 0; i < 3; i++) {
		sum = 0;

		scanf("%d %d %d %d", &a, &b, &c, &d);
		sum = a + b + c + d;
		if (sum == 3) printf("A\n");
		if (sum == 2) printf("B\n");
		if (sum == 1) printf("C\n");
		if (sum == 0) printf("D\n");
		if (sum == 4) printf("E\n");
	}
	return 0;
}