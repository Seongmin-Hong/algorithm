#include<stdio.h>

int main() {
	int i,j,n[8],a[8],b[8],x,y;
	x = 8;
	y = 
	scanf("%d %d %d %d %d %d %d %d", &n[0], &n[1], &n[2], &n[3],
		&n[4], &n[5], &n[6], &n[7]);
	
	if (n[0] == 1 && n[1] == 2 && n[2] == 3 && n[3] == 4 && 
		n[4] == 5 && n[5] == 6 && n[6] == 7 && n[7] == 8) {
		printf("ascending");
	}
	else if (n[0] == 8 && n[1] == 7 && n[2] == 6 && n[3] == 5 &&
		n[4] == 4 && n[5] == 3 && n[6] == 2 && n[7] == 1) {
		printf("descending");
	}
	else {
		printf("mixed");
	}
	
}
/*
i = 0 1 2 3 4 5 6 7 8

*/