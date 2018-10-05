#include<stdio.h>

int main() {
	int n, k, t, f, result;
	scanf("%d %d %d %d", &n, &k, &t, &f);

	result = (((f-n)/(k-1))*k)+n;
	printf("%d", result);
}

/*
result = 
안채울시 n =1  k = 2
n에 1t =  n + n-1 + k   =3
2t = n + n-1 + k + 2k = 7  
세번쨰 2(k-1) + k + n-1
t번째 t(k-1) + k + n-1 = f-n

n = 2고 k=8 가 1번 일어나면
 빈박스는 9 k+(n-1)
 총박스는 10 k+n
 2번 일어나면
 빈박스는 16 k+(n-1)+(k-1)
 총박스는 18 k + n + (k-1)
 

102 - 11 = t(k-1) + k + n -1

91 = (tk - t)  +k +n-1
91 = 16-2 + 8 + 11-1


f= 8


91 = 
2 2 2 5
7 = 5f-2n / 2k-1 *2 +2
11 8 2 102
115 = ((102 - 11) / (8-1))*k +11
115 =   (k)*13 + 11 


*/