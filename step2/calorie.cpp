#include<stdio.h>

int main() {
	int a, b, c, d , i , result;

	int ham[4] = { 461, 431 , 420 , 0 };
	int drk[4] = { 130, 160, 118 ,0 };
	int sid[4] = { 100 , 57 , 70, 0 };
	int des[4] = { 167 ,266 ,75 ,0 };


	scanf("%d %d %d %d", &a, &b, &c, &d);
	
	result = ham[a-1] + drk[b-1] + sid[c-1] + des[d-1];
	printf("Your total Calorie count is %d.", result);
}