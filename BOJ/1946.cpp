#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	int T;
	int N;
	int s, m;
	int min;
	int rst = 0;
	vector<pair<int, int>> v;

	cin >> T;
	for (int i = 0; i < T; i++)
	{
		v.clear();
		min = 100001;
		rst = 0;
		cin >> N;
		for (int i = 0; i < N; i++)
		{
			cin >> s >> m;
			v.push_back(make_pair(s, m));
		}
		sort(v.begin(), v.end());

		for (int i = 0; i < v.size(); i++)
		{
			if (min > v[i].second)
			{
				min = v[i].second;
				rst += 1;
			}
		}
		cout << rst << endl;
	}
	return 0;
}