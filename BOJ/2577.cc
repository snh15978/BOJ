#include <iostream>

using namespace std;

int main() {
	
	int i,N, arr[10] = { 0 };
	long long int rst=1;

	for(int i=0;i<3;i++){
		scanf("%d", &N);
		rst *= N;
	}
	
	while (rst > 0) {
		i = rst % 10;
		arr[i]++;
		rst = rst / 10;

	}
	for (int i = 0; i < 10; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}
