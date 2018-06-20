#include<iostream>
#include <algorithm>


using namespace std;

bool desc(int a, int b)
{
	return a > b;
}

int main()
{
	int N;
	int A[50];
	int B[50];
	int rst = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
	}
	for (int i = 0; i < N; i++)
	{
		cin >> B[i];
	}
	sort(A, A + N);
	sort(B, B + N,desc);
	for (int i = 0; i < N; i++)
	{
		rst += A[i] * B[i];
	}
	cout << rst << endl;
	return 0;
}