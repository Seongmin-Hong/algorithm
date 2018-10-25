#include<stdio.h>

int main() {
	int n , result;
	scanf("%d", &n);

	if (n & 1) {
		n -= 1;
		result = (n / 2) * (n / 2);
	}
	else {
		result = (n / 2) * ((n / 2) - 1);
	}

	printf("%d", result);

}
/*
	
	1234567 

	7 9  3*3 
	6 6  3*2
	5 4  2*2
	4 2  2*1
	3 1  1*1



*/