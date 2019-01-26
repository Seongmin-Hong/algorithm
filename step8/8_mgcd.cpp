#include<stdio.h>
int arr[101];

int gcd(int x, int y) {
	if (x % y == 0) return y;
	else return gcd(y, x%y);
}

int main() {
	int n,i;
	scanf("%d", &n);

	for (i = 0; i < n; i++) 
		scanf("%d", &arr[i]);
	for (i = 1; i <= n; i++) {
		arr[i] = gcd(arr[i], arr[i - 1]);
	}
	
	printf("%d", arr[n-1]);

}