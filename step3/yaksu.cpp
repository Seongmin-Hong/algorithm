#include<stdio.h>

int main() {
	int n,m, check,result;
	register int i;

	check = 0;
	result = 0;

	scanf("%d %d", &n ,&m);
	for (i = 1;i <= n;i++) {
		if (n%i == 0) check++;
		if (check == m) {
			result = i;
			break;
		}
	}
	if (result == 0) {
		printf("0");
	} else printf("%d", result);
}
