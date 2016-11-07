#include<string.h>
#include<stdio.h>
#include<stack>

using namespace std;
char a[600000];

int main() {

	scanf("%s", a);
	
	stack<char> right;
	stack<char> left;
	int i;
	int length = strlen(a);
	for (i = 0; i < length; i++) {
		left.push(a[i]);
	}

	int cnt;
	scanf("%d\n", &cnt);

	while(cnt--) {
		char cmd;
		scanf(" %c", &cmd);
		switch (cmd)
		{
		case 'L':
			if (!left.empty()) {
				right.push(left.top());
				left.pop();
			}
			break;
		case 'D':
			if (!right.empty()) {
				left.push(right.top());
				right.pop();
			}
			break;
		case 'B':
			if (!left.empty()) {
				left.pop();
			}
			break;
		case 'P':
			char cmd2;
			scanf(" %c", &cmd2);
			left.push(cmd2);
			break;
		default:
			break;
		}
	}
	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}
	while (!right.empty()) {
		printf("%c", right.top());
		right.pop();
	}

	
	return 0;
}
