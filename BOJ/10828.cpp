#include <stdio.h>
#include <string.h>
int stack[10000];
int size;
void init() {
	size = 0;
}
void push(int i) {
	stack[size] = i;
	size++;
}
int empty() {
	if (size == 0)
		return 1;
	else return 0;
}
int pop() {
	if (empty()) return -1;
	else
		size -= 1;
		return stack[size];
}
int top() {
	if (empty()) return -1;
	else
		return stack[size-1];
}

int main() {
	int cnt;
	int num,pop_num;
	char cmd[6];
	scanf("%d", &cnt);
	init();
	while (cnt--) {
		scanf("%s", cmd);
		if (strcmp(cmd, "push") == 0) {
			scanf("%d\n", &num);
			push(num);
		}
		else if (strcmp(cmd, "pop") == 0) {
			pop_num=pop();
			printf("%d\n", pop_num);
		}
		else if (strcmp(cmd, "top") == 0) {
			printf("%d\n", top());

		}
		else if (strcmp(cmd, "size") == 0) {
			printf("%d\n", size);
		}
		else if (strcmp(cmd, "empty") == 0) {
			printf("%d\n", empty());

		}
	}
	return 0;
}