#include <iostream>

using namespace std;

int gen(int num)
{
	int genNum = num;
	while(num>0)
	{
		genNum += num % 10;
		num = num / 10;
	}
	return genNum;
}


int main()
{
	bool isSelf[10000];
	int g;

	for (int i = 0; i<10000; i++)
	{
		isSelf[i] = true;
	}

	for (int i = 0; i<10000; i++)
	{
		g = gen(i);
		if (g < 10000)
		{
			isSelf[g] = false;
		}
	}

	for (int i = 0; i<10000; i++)
	{
		if (isSelf[i])
		{
			cout << i << endl;
		}
	}

	return 0;
}
