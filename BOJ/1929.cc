#include <cstdio>

#define MAX 1000001

int main() {

	int num1, num2;
	int arr[MAX] = { 0,1 };

	scanf("%d %d", &num1, &num2);

	for (int i = 2; i <= num2; i++) 
	{
		for (int j = 2; i*j <= num2; j++) {
			arr[i*j] = 1;
		}
	}

	for (int i = num1; i <= num2; i++) {
		if (arr[i] != 1)
			printf("%d\n", i);
	}
	return 0;
}