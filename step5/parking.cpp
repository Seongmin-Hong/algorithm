#include<stdio.h>

int main() {
	int arr[101]{ 0, };
	int a, b, c, s, e ,i , j;
	int sum = 0;

	scanf("%d %d %d", &a, &b, &c);

	for (i = 1; i <= 3; i++) {
		scanf("%d %d", &s, &e);
		for (j = s; j < e; j++) arr[j]++;
	}

	for (i = 1; i <= 100; i++) {
		if (arr[i] == 1) sum += a;
		else if (arr[i] == 2) sum += b * 2;
		else if (arr[i] == 3) sum += c * 3;
	}
	printf("%d", sum);

}
