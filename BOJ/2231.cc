#include <cstdio>
using namespace std;

int dsum(int n)
{
	if (n == 0) return 0;
	return n % 10 + dsum(n / 10);

}

int main()
{
	int N;

	scanf("%d", &N);
	for (int i = 1; i < N; i++)
	{
		if ((i + dsum(i)) == N)
		{
			printf("%d", i);
			return 0;
		}

	}
	printf("0");
	return 0;
}