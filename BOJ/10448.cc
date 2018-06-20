#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int t, k;
	int sam[46] = { 0 };
	int d[10001] = { 0 };
	for (int n = 1; n <= 45; n++)
	{
		sam[n] = n * (n + 1) / 2;
	}

	for (int i = 1; i <= 45; i++)
	{
		for (int j = 1; j <= 45; j++)
		{
			for (int k = 1; k <= 45; k++)
			{
				d[sam[i] + sam[j] + sam[k]] = 1;
			}
		}
	}
	
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> k;
		if (d[k] == 1)
		{
			cout << "1" << endl;
		}
		else
		{
			cout << "0" << endl;
		}
	}


	return 0;
}