#include<stdio.h>

int main() {
	int a, b, result;
	char*o,*e;
	
	o = "even";
	e = "odd";

	scanf("%d %d", &a, &b);

	if (a % 2 == 0) {
		(char)a = o;
	}else if (b % 2 == 0) {
		(char)b = o;
	}
	else {
		(char)a = e;
		(char)b = e;
	}
	printf("%s %s", a, b);

}