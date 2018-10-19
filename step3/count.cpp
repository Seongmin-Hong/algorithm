#include<stdio.h>
#include<stdio.h>

int main() {
	int n, m , a,b;
	long long int r=0;
	register int i=1;

	scanf("%d", &n);
	
	while (n > r) {
		r += i;
		i++;
	}

	r = i-1;
	m = ((r*(r+1))/2) - n;
	
	if (!(r & 1)) {
		a = r;
		b = 1;
		a -= m;
		b += m;
	}
	else {
		a = 1;
		b = r;
		a += m;
		b-= m;
	}
	

	printf("%d IS %d/%d",n,a,b);
}
