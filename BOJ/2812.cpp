#include <iostream>
#include <string>

using namespace std;

char stack[500000];

int main()
{
	int N, K, i, top = 0;
	string s;
	cin >> N >> K;

	cin >> s;

	i = 0;

	while (i < s.size())
	{
		while (K > 0 && top > 0 && stack[top - 1] < s[i])
		{
			top--;
			K--;
		}
		stack[top] = s[i];
		i++;
		top++;
	}
	if (K != 0)
	{
		top -= K;
	}

	for (i = 0; i <top; i++)
	{
		cout << stack[i];
	}
	return 0;
}