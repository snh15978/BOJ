#include <iostream>
#include <algorithm>

using namespace std;

char input[50][50];

int cnt(char chase[][8], int r, int c)
{
	int count = 0;
	int m = 99999999;

	for (int x = 0; x < r - 7; x++)
	{
		for (int y = 0; y < c - 7; y++)
		{
			count = 0;
			for (int i = x; i < x+8; i++)
			{
				for (int j = y; j < y+8; j++)
				{
					if (chase[i-x][j-y] != input[i][j])
					{
						count += 1;
					}
				}
			}
			m = min(m, count);

		}
	}

	//cout <<m<< endl;
	return m;
}

int main()
{
	char chase1[8][8];
	char chase2[8][8];
	
	int chk = 0; // 0 : 홀수(흰색) 1: 짝수(검정)
	int r, c;

	for (int i = 0; i < 8; i++)
	{
		if (i % 2 == 0)
		{
			chk = 1;
		}
		else
		{
			chk = 0;
		}
		for (int j = 0; j < 8; j++)
		{
			if (chk == 1)
			{
				if (j % 2 == 0)
				{
					//printf("B ");
					chase1[i][j] = 'B';
					chase2[i][j] = 'W';
				}
				else
				{
					//printf("W ");
					chase1[i][j] = 'W';
					chase2[i][j] = 'B';
				}
			}
			else
			{
				if (j % 2 != 0)
				{
					//printf("B ");
					chase1[i][j] = 'B';
					chase2[i][j] = 'W';
				}
				else
				{
					//printf("W ");
					chase1[i][j] = 'W';
					chase2[i][j] = 'B';
					
				}
			}
			//if(j%10==0)
			//	printf("\n");
			
		}
		//printf("\n");
	}

	cin >> r >> c;

	for (int i = 0; i < r; i++)
	{
		for (int j = 0; j < c; j++)
		{
			cin >> input[i][j];
		}
	}

	int a = cnt(chase1, r, c);
	
	int b = cnt(chase2, r, c);
	
	cout << min(a,b) << endl;

	
	return 0;
}