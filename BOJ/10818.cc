 #include <stdio.h>
int n[1000000];

int main() {
	int i,num;
	int max = -1000000, min = 1000000;
	scanf("%d\n", &i);
	while (i--) {
		scanf("%d", &num);
		if (max <= num) max = num;
		if (min >= num) min = num;
	}
	printf("%d %d\n", min, max);
	return 0;
}