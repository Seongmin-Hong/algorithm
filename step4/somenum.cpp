#include<stdio.h>
#include<math.h>

int main() {
	int i, j ,cnt;
	double n;

	
	for (i = 1; i <= 10000; i++) {
		cnt = 0;
		n = sqrt(i);
		for (j = 1; j < n; j++) {
			if (i%j!=0) cnt ++;
		}
		if (cnt == 0) printf("%d\n", i);
	}

}
