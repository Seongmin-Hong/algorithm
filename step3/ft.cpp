#include<stdio.h>

int main() {
	int n,num,sum;
	int mul;
	register int i;
	
	num = 0;
	sum = 0;
	mul = 1;

	scanf("%d", &n);
	
	for (i = 1;i <= n; i++) {
		if (n%i == 0) {

			num++;
			sum += i;
			mul = (mul *i) %10;
		
			printf("%d ", i);


		}

	}
	printf("\n%d\n%d\n%d\n", num, sum, mul);

}