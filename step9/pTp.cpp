#include<stdio.h>

void pTp(int x) {
	if (x != 1) {			
			pTp(x - 1);
			printf("%d", x-1);
			pTp(x - 1);
	}
	
}

int main() {
	int n;
	scanf("%d", &n);

	pTp(n);
}