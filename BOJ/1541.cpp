#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a;
	string num;
	int rst = 0;
	bool minus = false;
	cin >> a;
	
	a += '\0';

	for (int i = 0; i < a.size(); i++)
	{
		//cout << a[i] << endl;

		if (a[i] == '+' || a[i] == '-' || a[i]=='\0')
		{
			if (minus == true)
			{
				rst -= atoi(num.c_str());
			}
			else
			{
				rst += atoi(num.c_str());
			}
			num.clear();
		}
		else
		{
			num += a[i];
		}
		if (a[i] == '-')
		{
			minus = true;
		}
	}
	cout << rst << endl;
	return 0;
}