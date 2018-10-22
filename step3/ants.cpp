#include<stdio.h>

int main() {
	int L, n,ant , max = 0 , min = 1000000;
	int s, s1, m, f_max, f = 0, result, s_max=0,s1_max=0;
	register int i;

	scanf("%d %d", &L, &n);
	for (i = 1;i <= n;i++) {
		scanf("%d", &ant);
	
		if (L / 2 <= ant) f_max = L - ant;
		else f_max = ant;
		if (f < f_max) f = f_max;


		if (max < ant) max = ant;
		if (min > ant) min = ant;


		m = (max + min) / 2.0;
	
		if (max + min & 1) {
			s = 2 * (m+0.5) - min;
			s1 = max - (m + 0.5) + (L - (m + 0.5));

		}
		else {
			s = (2 * m) - min;
			s1 = (max - m) + (L - m);
		}
		if (s_max < s) s_max = s;
		if (s1_max < s1) s1_max = s1;


		result = s_max < s1_max ? s1_max : s_max ;
		
	}

	printf("%d %d", f,result);
}
/*
	191 + 7 / 2  99
	191 - 99 = 92 + (214 - 99) 
	
	99 - 7 = 91 + 99
	
	f = 

	전체 / 2
	크면 오른쪽 끝
	작으면 0

	제일 큰 숫자


	s=

	짝수일때 
	최대 + 최소 / 2 = 중간값
	홀수일때 
	max - (max + min / 2) + 1


	최대 - 중간값 + 오른쪽 끝 - 중간값
	중간값 - 최소 + 중간값

*/