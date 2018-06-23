#include <iostream>
#include <algorithm>


using namespace std;



int main()
{
	int N, M, a, b;
	int rst, pkg = 1001, p = 1001;

	cin >> N >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> a >> b;

		pkg = min(pkg, a);
		p = min(p, b);
	}

	//cout << N%6 << endl;


	if (pkg > p*6)
	{
		rst = N * p;
	}
	else if(pkg <p*(N%6))
	{
		rst = pkg *(N / 6 + 1);
	}
	else
	{
		rst = ((N / 6)*pkg) + ((N % 6)*p);
	}
	

	cout << rst << endl;
	return 0;
}