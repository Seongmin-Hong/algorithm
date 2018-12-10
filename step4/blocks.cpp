#include<stdio.h>

int main() {
	int n, c,min;
	int i,w,l,h,s;


	scanf("%d", &n);

	for (i = 1; i <= n; i++) {
		min = 987654321;
		scanf("%d", &c);
		for (w = 1; w*w <= c; w++) {
			if (!(c%w)) {
				for (l = 1; l <= n; l++) {
					h = c / (w*l);
					s = 2 * ((w*l) + (w*h) + (h*l));
					if (h < l) break;
					
					if (l*w*h == c) 
						if (min > s) min = s;
					

				}
			}


		}

		printf("%d\n", min);
	}


}
