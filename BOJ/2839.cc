#include <iostream>

using namespace std;

int main() {

	int N, three=0;
	scanf("%d", &N);

	while(1) {
		if (N % 5 == 0) {
			printf("%d", N/5+three);
			break;
		}
		else if (N < 0) {
			printf("-1");
			break;
		}
		N -= 3;
		three++;
	}
	return 0;
}
