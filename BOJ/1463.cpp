#include <stdio.h>

#define comp(a,b) ((a)<(b))?(a):(b)

int main() {
	int a = 1, b = 0, c, d, anw;

	c = 0 && (a = b = 55);
	d = 100 || (a = b = 32);

	a += a;

	anw = comp(a, b);

	printf("%d %d %d %d\n", a,b,c,d);

	return 0;

}