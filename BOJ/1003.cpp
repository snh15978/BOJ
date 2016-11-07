#include<stdio.h>

int zerocnt = 0;
int onecnt = 0;
int fibonacci(int n) {
	if (n == 0) {
		zerocnt += 1;
		return 0;
	}
	else if (n == 1) {
		onecnt += 1;
		return 1;
	}
	else {
		return fibonacci(n-1) + fibonacci(n-2);
	}
}

int main() {
	int n,i;

	scanf("%d", &n);
	while(n--){
		scanf("%d", &i);
		fibonacci(i);
		printf("%d %d\n", zerocnt, onecnt);
		zerocnt = 0;
		onecnt = 0;
	}
	return 0;
}