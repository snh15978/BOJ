#include<string>
#include<iostream>
#include<stack>

using namespace std;

int main() {

	stack<int> stack;
	string s;
	cin >> s;

	int n = s.size();
	int rst=0;
	int a;
	for (int i = 0; i < n; i++) {
		if (s[i] == '(') {
			stack.push(i);
		}
		else {
			if (stack.top() + 1 == i) {
				stack.pop();
				a = stack.size();
				rst += a;
			}
			else {
				stack.pop();
				rst += 1;
			}
		}
	}
	cout << rst << '\n';

	return 0;
}