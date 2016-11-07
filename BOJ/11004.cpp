#include<cstdio>
#include<vector>
#include<algorithm>
using namespace std;
int main() {

	int cnt, find;
	int data;

	vector<int> v;

	scanf("%d %d", &cnt, &find);
	
	while (cnt--) {
		scanf(" %d", &data);
		v.push_back(data);
	}
	nth_element(v.begin(), v.begin() + find-1, v.end());
	printf("%d\n", v[find-1]);


	return 0;
}