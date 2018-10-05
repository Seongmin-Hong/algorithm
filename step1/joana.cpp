#include<stdio.h>


int main() {
	long long int n, result, floor,x,y;
	scanf("%d", &n);
	
	floor = (n+1) / 2;
	y = floor * floor;
	x = 2*y - 1;

	result = (3 * x) - 6;
	
	printf("%lld", result);
}
/*
         1
       3 5 7
   9 11 13 15 17
19 21 23 25 27 29 31


a2 - a1 =2
a3 - a2 =2
an = an-1 = d
           공차 = d
an = a1 + (n-1) *d

aX = 2n -1

3a = 5

n항부터 n항까지의 합
Sn =n(an+a1)/2 

n = 층

n = 3 2에서4번쨰항까지    2
n = 5 5번째서 9번째항     4
n = 7 10 ~ 16번   6
n = 9 17 ~ 25     8

n번째 마지막항 = x
마지막 세 수열의 합 = x + x-2 + x-4
result = 3x-6

x = 7
15

x = a^
a = 2의배수

n = 2y-1
y-1 = n/2
y = n-1/2

y = 3		y = 4		y = 5
n = 5		n = 7       n = 9
x = 9		x = 16		x = 25
*/