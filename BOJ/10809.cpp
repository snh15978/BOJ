#include<iostream>
#include<string>
using namespace std;
int main() {

	string s;
	cin >> s;

	int str[26];

	for (int i = 0; i < 26; i++) {
		str[i] = -1;
	}
	for (int i = 0; i < s.size(); i++) {
		int rst = s[i] - 'a';
		if (str[rst] < i && str[rst]!=-1)
			continue;
		else
			str[rst] = i;
	}
	for (int i = 0; i < 26; i++) {
		cout << str[i] << ' ';
	}
	return 0;
}