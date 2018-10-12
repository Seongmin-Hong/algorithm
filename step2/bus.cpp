#include<stdio.h>

int main() {
	int direct, bus1, bus2;
	double result;
	
	while ( scanf("%d %d %d", &direct, &bus1, &bus2) != EOF) {

		switch (direct) {
		case 0:
			result = ((double)bus2*bus1)/(bus2+bus1);
			printf("%.2lf\n", result);
			break;

		case 1:
			if (bus2 > bus1) {
				result = ((double)bus2*bus1) / (bus2 - bus1);
				printf("%.2lf\n", result);
			}
			else if (bus2 < bus1) {
				result = ((double)bus2*bus1) / (bus1 - bus2);
				printf("%.2lf\n", result);
			}
			else printf("-1\n");
			break;

		}
		printf("\n");
	}
	return 0;
}

/*
거 = 속 * 시

속 = 거 / 시

시 = 거 / 속
	

r = 10/ ( 10/a - 10/b)
a * 1/10 - 


10 / 

	*/