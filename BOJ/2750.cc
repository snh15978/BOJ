#include <cstdio>

using namespace std;

int main()
{
	int N,num,arr[1000];
	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", &num);
		arr[i] = num;
	}

	for (int i = 0; i < N; i++) {
		for (int j = i + 1; j < N; j++) {
			if (arr[i] > arr[j]){
				int temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}

		}
	}

	for (int i = 0; i < N; i++) {
		printf("%d\n", arr[i]);
	}
	return 0;
}