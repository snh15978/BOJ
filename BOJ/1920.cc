#include <cstdio>
#include <algorithm>
using namespace std;


int search(int arr[], int s, int e, int k) {

	if (s > e) return 0;

	int m = (s + e) / 2;

	if (arr[m] == k) return 1;
	if (arr[m] > k)
		return search(arr, s, m - 1, k);
	else
		return search(arr, m + 1, e, k);
}


int main()
{
	int N, M,d;
	int A[100000];
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &d);
		A[i] = d;
	}

	sort(A, A+N);

	scanf("%d", &M);
	for (int i = 0; i < M; i++) {
		scanf("%d", &d);
		printf("%d\n",search(A, 0, N, d));
	}

	return 0;
}