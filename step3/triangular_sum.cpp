#include<stdio.h>

int main() {
	int n,w,t,result,j;
	register int i;

	t = 0;
	w = 0;
	result = 0;
	scanf("%d", &n);

	for (i = 1;i <= n;i++) {
		
		j = i + 1;
		t = j * ((j+1) / 2.0);
		w = t * i;
		result += w;
		
	}
	
	printf("%d", result);
}
