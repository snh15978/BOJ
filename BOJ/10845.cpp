#include <iostream>
#include <string>
using namespace std;

struct Queue {
	int data[10000];
	int begin,end;

	Queue() {
		begin = 0;
		end = 0;
	}

	void push(int num) {
		data[end] = num;
		end += 1;
	}

	int pop() {
		if (empty()) {
			return -1;
		}
		begin++;
		return data[begin - 1];
	}

	int front() {
		if (empty()) {
			return -1;
		}
		return data[begin];
	}

	int back() {
		if (empty()) {
			return -1;
		}
		return data[end-1];
	}
	
	int size() {
		return end - begin;
	}
	int empty() {
		if (end == begin ) {
			return 1;
		}
		else 
			return 0;
	}
};

int main() {

	string s;
	int cnt,num;
	scanf("%d\n", &cnt);

	Queue q;
	while (cnt--) {
		cin >> s;
		if (s == "push") {
			cin >> num;
			q.push(num);
		}
		else if (s == "pop") {
			cout << q.pop() << endl;
		}
		else if (s == "front") {
			cout << q.front() << endl;
		}
		else if (s == "back") {
			cout << q.back() << endl;
		}
		else if (s == "size" ) {
			cout << q.size() << endl;
		}
		else if (s == "empty") {
			cout << q.empty() << endl;
		}
	}
	return 0;
}