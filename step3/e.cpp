#include<stdio.h>

int facto(int x) {
	if (x == 0) return 1;
	return x * facto(x - 1);
}

int main() {
	long double e = 0;
	register int i,j;

	printf("n e\n");
	printf("- -----------\n");

	for (i = 0; i < 10; i++) {
		
		e += 1.0/facto(i);
		printf("%d %Lf\n",i, e);
	}
	
}