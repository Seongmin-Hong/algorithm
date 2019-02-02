#include<stdio.h>
//a[n] = a3*a0 + a2*a1 + a1*a2 + a0*a3
//a[2] = a1 * a0 + a0 * a1
//a[3] = a2 * a0 + a1 * a1 + a0 * a2
int arr[20]{ 1,1 };
int sum;

void gc(int x) {
	for (int i = 2; i <= x; i++) {
		sum = 0;
		for (int j = 0; j < x; j++) {
			sum += arr[i - j - 1] * arr[j];
		}
		arr[i] = sum;
		
	}
}

int main() {
	int n;
	scanf("%d", &n);
	gc(n);
	printf("%d", arr[n]);
}