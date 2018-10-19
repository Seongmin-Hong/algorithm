#include<stdio.h>

int main() {
	int m,x,y,x_sum =0 , y_sum=0 ,x_max=0, y_max=0;
	register int i;
	scanf("%d", &m);
	for (i = 0;;i++) {
		scanf("%d %d", &x ,&y);
		
		if (x == -1 && y == -1) {
			y_sum += y_max;
			break;
		}
		
		if (x_sum + x > m) {
			x_sum = 0;
			y_sum += y_max;
			y_max = 0;
		}
	
		if (y > y_max) y_max = y;
		x_sum += x;
		
		if (x_sum > x_max) x_max = x_sum;
		

	}


	printf("%d x %d", x_max, y_sum);
}
/*
x+x+x
x +x °¡ m Å©¸é
y_sum+= y_max
x_max = x_sum
x_sum = 0;


*/