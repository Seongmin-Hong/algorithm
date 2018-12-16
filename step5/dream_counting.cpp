#include<stdio.h>

int main() {
	int n, m, i;
	int a;
	int arr[10]{0,};

	scanf("%d %d", &n, &m);
	
	for (i = n; i <= m; i++) {
		a = i;
		while (1) {
			arr[a % 10] += 1;
			a /= 10;
			if (!a) break;

		}
		
	}
	for (i = 0; i <= 9; i++) printf("%d ", arr[i]);


}

