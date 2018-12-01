#include<stdio.h>

int GCD(int x, int y) {
	if (!y) return x;
	else return GCD(y, x%y);
}

int main() {
	int a, b ,t ,c ,s;
	
	scanf("%d %d", &a, &b);

	while (1) {
		
		if (a==1 || a==0) break;

		printf("%d ", b/a);
		
		t = b;
		b = a;
		a = t % a;
		
		c = GCD(a, b);
		a /= c;
		b /= c;

	
	}
	if(a) printf("%d", b);

}
