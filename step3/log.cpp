#include<stdio.h>

int main() {
	int n ,low, high , sum=0;
	register int i = 1, j = 1;
	
	scanf("%d", &n);

	while (1) {
		if ((i*(i + 1)) / 2 >= n) {
			low = i;
			break;
		}
		i++;
	}
	
	high = ((low*(low+1)) / 2) - n;
	
	while (1) {
		if (high < 0) break;
		high -= j;
		j++;
	}
	

	printf("%d %d", low , -high);
}
/*

	

*/