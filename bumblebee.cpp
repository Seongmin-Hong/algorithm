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
��=��*��
���չ� = x��
a���� �ӷ� = 

�Ÿ� 10 = t * 2+3


*/