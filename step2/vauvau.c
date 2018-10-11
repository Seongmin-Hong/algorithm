#include<stdio.h>
int m_vau(int j, int a, int b , int c, int d) {
	int x, y;
	int vaou = 0;
	char *result = "";

	x = j % (a + b);
	y = j % (c + d);
	if (a >= x && 0 != x)  vaou++;
	if (c >= y && 0 != y)  vaou++;

	switch (vaou) {
	case 0: result = "none\n";
		break;
	case 1: result = "one\n";
		break;
	case 2: result = "both\n";
		break;
	}
	return result;
	}

int main() {
	int a, b, c, d;
	int p, m, g;

	scanf("%d %d %d %d", &a, &b, &c, &d);
	scanf("%d %d %d", &p, &m, &g);

	printf(m_vau(p, a, b, c, d));
	printf(m_vau(m, a, b, c, d));
	printf(m_vau(g, a, b, c, d));
}
/*
px = p % (a + b);
	py = p % (c + d);

	if (a >= px) vau++;
	if (c >= py) vau++;

	switch (vau) {
	case 0: printf("none\n");
		break;
	case 1: printf("one\n");
		break;
	case 2: printf("both\n");
		break;
	}

	2 3      4 5
	12 


	5 5 5
	4 9 5
	1 4 0



	*/