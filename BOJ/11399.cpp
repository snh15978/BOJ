#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;

int main()
{
	int N, rst = 0,tmp = 0;
	int arr[1000];

	cin >> N;

	

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + N);

	for (int i = 0; i < N; i++)
	{
		tmp += arr[i];

		rst += tmp;
	}

	cout << rst << endl;

	return 0;
}