#include<stdio.h>
#include<stack>
#include<string.h>

using namespace std;

int op(char i) {
	if (i == '*' || i == '/') return 2;
	else if (i == '+' || i == '-') return 1;
	else if (i == '('|| i == ')') return 0;
	else return -1;
}

int main() {
	char s[300];

	scanf("%s", s);
	stack<char> stack;
	int n = strlen(s);
	for (int i = 0; i < n; i++) {
		char a = s[i];
		if (a == '*' || a =='/' || a == '+' || a == '-') {
			while (!stack.empty() && op(stack.top()) >= op(a)) {
				
				printf("%c", stack.top());
				stack.pop();
			}
			stack.push(a);
		}

		else if(a == '('){
			stack.push(a);
		}

		else if (a == ')') {
			while (stack.top() != '(') {
				printf("%c", stack.top());
				stack.pop();
			}
			stack.pop();
		}

		else {
			printf("%c", a);
		}
	}
	while (!stack.empty()) {
		printf("%c", stack.top());
		stack.pop();
	}
	return 0;
}