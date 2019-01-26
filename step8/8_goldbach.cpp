#include<stdio.h>
int arr[100000];
int cnt;
int flag;

void mPrime(int x) {
	int i,j;
	
	for (i = 3; i <= x; i++) {
		flag = 0;
		for (j = 2; j*j <= i; j++) {
			if (i%j == 0) {
				flag = 1;
				break;
			}
		}
		if (!flag) {
			arr[cnt] = i;
			cnt++;
		}
	}
}

int main() {
	int n,i,j;

	scanf("%d", &n);
	mPrime(n);
	flag = 0;

	for (i = 0; i <= cnt-1; i++) {
		if (flag) break;
		for (j = i + 1; j <= cnt; j++) {
			if (arr[i] + arr[j] == n) {
				printf("%d = %d + %d", n, arr[i], arr[j]);
				flag = 1;
				break;
			}
			else if (arr[i] + arr[j] > n) break;

		}
	}
	if (!flag) printf("Goldbach's conjecture is wrong.");

}