#include <cstdio>
#include <iostream>
#include <algorithm>

using namespace std;

int A[1000000], B[1000000], rst[2000000];
int main() {

	int N, M;

	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++) {
		scanf("%d", A + i);
	}

	for (int j = 0; j < M; j++) {
		scanf("%d", B + j);
	}

	sort(A, A + N);
	sort(B, B + M);

	int i = 0, j = 0, idx = 0;
	
	while (i < N && j < M) {
		if (A[i] <= B[j]) {
			rst[idx] = A[i++];
		}
		else {
			rst[idx] = B[j++];
		}
		idx++;
	}

	if (i >= N) {
		for (int k = j; k < M; k++) {
			rst[idx] = B[k];
			idx++;
		}
	}
	else {
		for (int k = i; k < N; k++) {
			rst[idx] = A[k];
			idx++;
		}
	}

	for (int i = 0; i < idx; i++) {
		printf("%d ", rst[i]);
	}
	return 0;
}