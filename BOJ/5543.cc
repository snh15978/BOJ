#include <iostream>

using namespace std;

int main() {

	int N, min_bur=2000, min_drink=2000;

	for (int i = 0; i < 5; i++) {
		scanf("%d", &N);
		if (i < 3) {
			min_bur = (min_bur > N ? N : min_bur);
		}
		else{
			min_drink = (min_drink > N ? N : min_drink);
		}
	}
	printf("%d", min_bur + min_drink - 50);
	return 0;
}