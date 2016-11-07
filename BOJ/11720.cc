 #include <stdio.h>
 int main() {
	 int i;
	 int num;
	 int sum = 0;
	 scanf("%d\n", &i);
	 while (i--) {
		 scanf("%1d", &num);
//		 printf("%d\n", num);
		 sum += num;
	 }
	 printf("%d\n", sum);
	return 0;
}