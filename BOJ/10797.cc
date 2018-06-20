#include <iostream>

using namespace std;

int main() {

	int N, num, cnt = 0;;
	scanf("%d", &N);
	for (int i = 0; i < 5; i++) {
		scanf("%d", &num);
		if (N == num) cnt++;
	}
	printf("%d", cnt);

	return 0;
}
