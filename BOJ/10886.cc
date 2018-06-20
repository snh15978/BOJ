#include <iostream>

using namespace std;

int main() 
{
	int N,a;
	int arr[2] = { 0 };
	scanf("%d", &N);
	for (int i = 0; i < N; i++) {
		scanf("%d", &a);
		if (a == 0) arr[0]++;
		else arr[1]++;
	}
	
	if (arr[0] > arr[1]) printf("Junhee is not cute!");
	else printf("Junhee is cute!");

	return 0;
}