#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int arr[20];
	int N, S, d, cnt = 0;
	
	scanf("%d %d", &N, &S);

	for (int i = 0; i < N; i++) {
		scanf("%d", &d);
		arr[i] = d;
	}

	for (int i = 1; i < (1 << N); i++) {
		int sum = 0;
		for (int j = 0; j < N; j++) {
			if (i & (1 << j)) {

//				printf("%d, ", arr[j]);
				sum += arr[j];

			}
		}
		if (sum == S) cnt++;
	}

	printf("%d", cnt);
	return 0;
}