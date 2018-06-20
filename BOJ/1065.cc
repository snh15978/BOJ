#include <cstdio>
using namespace std;

int main()
{
	int N, cnt = 0, n1, n2, n3;

	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{

		if (i >= 100)
		{
			n3 = i / 100;
			n2 = (i / 10) % 10;
			n1 = i % 10;

			if (n3 - n2 == n2 - n1) {
				cnt++;
			}
		}

		else
		{
			cnt++;
		}
	}
	printf("%d", cnt);
	return 0;
}