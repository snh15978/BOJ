#include <iostream>
#include <vector>

using namespace std;


int main() 
{
	int N = 80, cnt;
	long long int size;

	vector<long long int> dp(N + 3, 0);
	dp[1] = 1;
	for (int i = 0; i <= N; i++) {
		dp[i + 2] += dp[i];
		dp[i + 1] += dp[i];
	}
	scanf("%d", &cnt);
	size = (dp[cnt] + dp[cnt + 1]) * 2;
	printf("%lld\n", size);
	return 0;
}