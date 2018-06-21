#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



bool comp(const pair<int,int> &l, const pair<int, int>& r)
{
	if (l.second == r.second)
		return l.first < r.first;
	return l.second < r.second;
}

int main()
{
	vector<pair<int, int>> t;

	int N;
	int a, b;
	int e=0;
	int rst = 0;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> a >> b;
		t.push_back(make_pair(a, b));
	}

	sort(t.begin(), t.end(),comp);

	for (int i = 0; i < N; i++)
	{
		//cout << t[i].first << " " << t[i].second << endl;
	}


	for (int i = 0; i < N; i++)
	{
		//cout << t[i].first << " e: " << e << endl;
		if (t[i].first >= e)
		{
			rst += 1;
			e = t[i].second;
			//cout << "e :" << e << endl;
		}
	}

	cout << rst << endl;

	return 0;
}