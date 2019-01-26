#include<stdio.h>

int Radd(int x) {
	int rev = 0;
	while (x) {
		rev = (rev * 10) + (x % 10);
		x /= 10;
	}
	return rev;
}


int main() {
	int sum;
	
	for (int i = 10; i <= 100000; i++) {
		sum = i + Radd(i);
		if (sum == Radd(sum))
			printf("%d\n", i);
	}
}