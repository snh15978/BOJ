#include <cstdio>
#include <algorithm>

using namespace std;

int main()
{
	int N, sum = 0;
	int arr[9];
	int cnt = 0;
	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &N);
		sum += N;
		arr[i] = N;
	}

	int rst = sum - 100;

	for (int i = 0; i < 8; i++)
	{
		if (cnt == 1)
			break;
		for (int j = i + 1; j < 9; j++)
		{
			if ((arr[i] + arr[j]) == rst)
			{
				arr[i] = arr[j] = 101;
				cnt = 1;
				break;
			}
		}
	}
	sort(arr, arr + 9);
	for (int i = 0; i < 9; i++)
	{
		if (arr[i] != 101)
			printf("%d\n", arr[i]);
	}
	return 0;
}