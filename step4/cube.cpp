#include<stdio.h>

int main() {
	int d,a,b,c,n;
	int a3, b3, c3, d3;
	int i;

	scanf("%d", &n);
	
	for (a = 6; a <= n; a++) {
		for (b = 2; b < a; b++) {
			for (c = b; c < a; c++) {
				for (d = c; d < a; d++) {
					if (b > c && c > d && b>d) break;
					a3 = a * a*a;
					b3 = b * b*b;
					c3 = c * c*c;
					d3 = d * d*d;


					if (a3 == b3 + c3 + d3) {
						printf("Cube = %d, Triple = (%d,%d,%d)\n", a, b, c, d);
					}
				}
			}
		}



	}

}