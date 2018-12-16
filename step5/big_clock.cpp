#include<stdio.h>


int main() {
	int h,m,i;
	int arr[25];

	for (i = 0; i < 25; i++) {
		if (i < 13) arr[i] = i + 12;
		else arr[i] = i-12;
	}

	scanf("%d:%d", &h, &m);

	if (!m) printf("%d", arr[h]);
	else printf("0");

}