#include<stdio.h>

int main() {
	int l_y;
	scanf("%d", &l_y);

	if (l_y%100!=0 && l_y%4==0) {
		printf("YES");
	}
	else if (l_y % 400 == 0) {
		printf("YES");
	}
	else printf("NO");
}
/*
 if ( (l_y%100!=0 && l_y%4==0) ) || l_y % 400 == 0 ) {
		printf("YES");
	}




*/