#include<iostream>
#include<algorithm>
#include<cstdio>

using namespace std;

int arr_N[500000];
int arr_Cnt[20000001] = { 0 };

int search(int start, int end, int num) {

	int mid = 0;
	mid = (start + end) / 2;

	if (start > end) {
		return 0;
	}

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
	int N, M, value,a;
	
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", arr_N + i);
		arr_Cnt[arr_N[i]+10000000] += 1;
	}

	sort(arr_N, arr_N + N);

	scanf("%d", &M);

	for (int i = 0; i < M; i++) {
		scanf("%d", &value);
		a = search(0, N - 1, value);

		if (a == 1)
		{
			printf("%d ", arr_Cnt[value+10000000]);
		}
		else
		{
			printf("0 ");
		}
	}
	
	return 0;
}