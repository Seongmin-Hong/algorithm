#include<stdio.h>

int main() {
	int n ,m,k, t ,x ,y;
	long long int r=0;
	int i = 1;
	
	scanf("%d", &n);
	while (n > r) {
		r += (2 * i) - 1;
		i++;
		t = i - 1;
	}

	m = (t*t) - n ;
	x = t;
	y = t;

	if (m > t-1) {
		m -= (t - 1);
		y -= m;
	}
	else if (m < t - 1) {
		m = t - 1 - m;
		x -= m;
		
	}
	
	if(t&1) printf("%d %d", x, y);
	else printf("%d %d", y, x);

}
