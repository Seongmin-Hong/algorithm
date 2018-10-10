#include<stdio.h>

int main() {
	int people,t, p, z , max, min;
	scanf("%d %d %d %d", &people, &t, &p, &z);

	if (t <= p && t <= z) {
		max = t;
	}
	else if (p <= t && p <= z) {
		max = p;
	}
	else max = z;

	min = people - ((3 * people) - (t + p + z));
	if (min < 0) min = 0;
	
	printf("%d %d", max, min);
	
}

/*
	P-t + P-p + P -
	
*/