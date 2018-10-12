#include<stdio.h>

int main() {
	int n;
	double result;

	scanf("%d", &n);

	if (n == 12) {
		result = 0;
		printf("%lf", result);
	}
	else if (n == 11) {
		printf("CAN'T SEE!");
	}
	else {
		result = (n * 60.0) / 11.0;
		printf("%lf", result);
	}

	
}
/*


*/