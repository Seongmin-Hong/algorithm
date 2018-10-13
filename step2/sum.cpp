#include<stdio.h>

int main() {
	int n,result ;
	register int i;
	result = 0;
	
	for (i = 0; i < 7;i++) {
		scanf("%d", &n);
		
		result += + n;
	}
	printf("%d", result);
}