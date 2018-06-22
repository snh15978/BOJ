#include <cstdio>

using namespace std;

int main()
{
	int N, A, money, cnt = 0;
	int arr[10];

	scanf("%d %d", &N, &money);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A);
		arr[i] = A;
	}

	for (int i = N - 1; i >= 0; i--)
	{
		if (arr[i] <= money)
		{
			cnt += money / arr[i];
			money %= arr[i];
		}
	}

	printf("%d", cnt);
	return 0;
}