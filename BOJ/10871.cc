#include <iostream>
#include <vector>
using namespace std;


int main() {
	int N, X,d;
	vector<int> arr;
	scanf("%d %d", &N, &X);

	for (int i = 0; i < N; i++) {
		scanf("%d", &d);
		arr.push_back(d);
	}

	for (int i = 0; i < N; i++) {
		if (arr[i] < X) printf("%d ", arr[i]);
	}

	return 0;
}