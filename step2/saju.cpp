#include<stdio.h>

int main() {
	int y, m, d , saju;
	scanf("%d %d %d", &y,&m,&d);

	saju = y + m + d;

	if (saju%10 == 0) {
		printf("운수대통!");
	}
	else {
		printf("노력하세요!");
	}
}