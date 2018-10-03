#include<stdio.h>

int main() {
	int a, b, x, l;
	double result,time;
	scanf("%d %d %d %d", &a, &b, &x, &l);

	time = (double)l / (a + b);
	result = x * time;
	
	printf("%.6lf", result);

}
/*
거=시*속
여왕벌 = x속
a기차 속력 = 

거리 10 = t * 2+3


*/