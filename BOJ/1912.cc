#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
int main() {
	int n,rst;
	cin >> n;
	vector<int> a(n + 1);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	vector<int> d(n + 1);

	d[0] = a[0];
	for (int i = 1; i < n; i++) {
		d[i] = max(a[i], d[i - 1] + a[i]);
	}

	rst = d[0];

	for (int i = 1; i < n; i++) {
		rst = max(rst, d[i]);
	}

	cout << rst << '\n';
	return 0;
}
