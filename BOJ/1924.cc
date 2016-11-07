#include <stdio.h>
int main() {
	int m, d;
	int month[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
	int rst;
	scanf("%d %d", &m, &d);

	m -= 1;
	for (int i = 0; i < m; i++) {
		d += month[i];
	}
	rst = d % 7;
	switch (rst)
	{
	case 0:
		printf("SUN"); break;
	case 1:
		printf("MON"); break;
	case 2:
		printf("TUE"); break;
	case 3:
		printf("WED"); break;
	case 4:
		printf("THU"); break;
	case 5:
		printf("FRI"); break;
	case 6:
		printf("SAT"); break;
	default:
		break;
	}
	return 0;
}