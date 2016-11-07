#include<iostream>
#include<string>

using namespace std;
int main() {

	long long int a, b, c, d,rst;
	string st1, st2;
	cin >> a >> b >> c >> d;

	st1= to_string(a) + to_string(b);
	st2 = to_string(c) + to_string(d);
		
	long long int op1 = stoll(st1);
	long long int op2 = stoll(st2);

	cout << op1 + op2 << endl;

	return 0;
}