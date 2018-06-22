#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int N, max = 0,tmp = 0;
	int arr[100000];

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + N);

	for (int i = 0; i < N; i++)
	{
		if (max < arr[i] * (N - i))
		{
			max = arr[i] * (N - i);
		}
		 
	}

	cout << max << endl;

	return 0;
}