#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool comp(const char &l, const char &r)
{
	return l > r;
}

int main()
{

	string n;
	int sum = 0, value = 0;
	bool zero = false;

	cin >> n;

	sort(n.begin(),n.end(),comp);

	for (int i = 0; i < n.size(); i++)
	{
		value = n[i] - '0';
		sum += value;
		if (value == 0) zero = true;
	}

	if ((sum % 3 == 0) && (zero == true))
	{
		for (int i = 0; i < n.size(); i++)
		{
			cout << n[i];
		}
	}
	else
	{
		cout << "-1" << endl;
	}
	return 0;
}