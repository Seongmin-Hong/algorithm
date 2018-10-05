#include<stdio.h>

int main() {
	int h, v , w, p, x,y;
	scanf("%d %d", &h, &v);

	x = (h / 8);
	y = (v / 8);
	w = x*y;

	if (h % 8 != 0 && v % 8 == 0) {
		p = v / 8;
	}
	else if (v % 8 != 0 && h % 8 == 0) {
		p = h / 8;
	}
	else if (h % 8 != 0 || v % 8 != 0) {
		p = x + y + 1;
	}
	else { p = 0; }

	
	
	
	printf("The number of whole tiles is %d part tiles is %d", w, p);

}
/*
	100 120
	1*15 + 0*12
	
	160 240
	 0 + 0

	 100 100
	 1*12 + 1*12

	 µŒ∞≥¥Ÿ 1¿œ∂© +1

	p = (h / 8) + (v / 8) +1;


*/