#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
	int N, cnt = 0;
	int arr[6] = { 500,100,50,10,5,1 };
	cin >> N;
	N = 1000 - N;

	for (int i = 0; i < 6; i++)
	{
		if (arr[i] <= N)
		{
			cnt += N / arr[i];
			N %= arr[i];
		}
	}

	cout << cnt << endl;

	return 0;
}