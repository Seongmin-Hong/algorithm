#include<stdio.h>
#include<math.h>

int main() {
	int arr[50000];
	int i, n ,flat=0;

	scanf("%d", &n);

	if (!(n & 1)) printf("%d", n / 2);
	else {
		for (i = 2; i <= sqrt(n); i++) {
			if (!(n%i)) {
				flat = 1;
				break;
				
			}

		}
		flat ? printf("%d", n - (n / i)) : printf("%d", n-1);
	}
}