#include<stdio.h>
//2992
int sfn(int x , int y) {
	if (x == 0) return 0;
	return sfn(x/y,y)+x%y;
}

int main() {
	register int i;
	
	for (i = 1000; i < 10000; i++) {
		if (sfn(i, 10) == sfn(i, 12) && sfn(i, 10) == sfn(i, 16))
			printf("%d\n", i);
	}
}