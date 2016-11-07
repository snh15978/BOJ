#include <stdio.h>
#include <string.h>

int main() {

	int n,cnt;
	char s[50];

	scanf("%d\n", &n);
	
	for(int j=0;j<n;j++) {
		scanf("%[^\n]\n", s);
		cnt = 0;
		for (int i=0; s[i]; i++) {
			if (s[i] == '(') {
				cnt++;
			}
			else {
				cnt--;
			}

			if (cnt < 0) {
				printf("NO\n");
				break;
			}
		}
		if (cnt == 0) printf("YES\n");
		else if(cnt>0) printf("NO\n");
	}
	return 0;
}