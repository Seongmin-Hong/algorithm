#include<stdio.h>

int main() {
	double x, y;
	register int i;

	while(1){
	
		scanf("%lf", &x);
		if (x == -1) break;
		y = x * 0.167;

		printf("Objects weighing %.2lf on Earth will weigh %.2lf on the moon.\n", x, y);
	}
}