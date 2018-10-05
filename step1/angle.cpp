#include<stdio.h>

int main() {
	int x, in, out;
	int err();

	scanf("%d", &x);
	
	
	if (x >= 3 && x <= 20) {
		in = (x-2) * 180;
		out = (x * 180) - in;
	}
	else return err();
	
	printf("%d %d", in, out);
}

int err() {
	return printf("잘못된 값 입니다.");
}
