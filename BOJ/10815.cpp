#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

int arr_N[500000];

int search(int start, int end, int num) {
	int mid = 0;

	if (start > end) {
		return 0;
	}
	mid = (start + end) / 2;

	if (arr_N[mid] == num) {
		return 1;
	}

	else if (arr_N[mid] < num) {
		return search(mid + 1, end, num);
	}
	else {
		return search(start, mid - 1, num);

	}
}

int main() {
	int N, M, value, a;

	//cin >> N;
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		//cin >> arr_N[i];
		scanf("%d", arr_N + i);
	}

	sort(arr_N, arr_N + N);

	//cin >> M;
	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		//cin >> value;
		scanf("%d", &value);
		printf("%d ", search(0, N - 1, value));
	}

	return 0;
}