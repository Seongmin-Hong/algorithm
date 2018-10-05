#include<stdio.h>

int main() {
	int r, e, c;
	scanf("%d %d %d", &r, &e, &c);

	if (e - c > r) {
		printf("advertise");
	}
	else if (e - c == r) {
		printf("does not matter");
	}
	else {
		printf("do not advertise");
	}
}
/*
	홍보하지 않을경우 수입 r
	홍보 시 수입 e
	홍보 비용 c

	e-c>r



*/