#include <iostream>
#include <string>
using namespace std;
int main() {
	string s;
	cin >> s;

	int arr[26] = { 0 };

	for (int i = 0; i < s.size(); i++) {
		int rst = s[i] - 'a';
		arr[rst]++;
	}

	for (int i = 0; i < 26; i++) {
		cout << arr[i] << ' ';
	}

	return 0;
}