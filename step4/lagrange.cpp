#include<stdio.h>
#include<math.h>

int main() {
	int n, cnt=0;
	int i,j,k,l;

	scanf("%d", &n);

	for (i = 1; i*i <= n; i++) {
		if (n == i * i) {
			cnt += 1;
			break;
		}
		for (j = i; (j*j) + (i*i) <= n; j++) {
			if (n == (j*j) + (i*i)) {
				cnt += 1;
				break;
			}
			for (k = j; (j*j) + (i*i) + (k*k) <= n; k++) {
				if (n == (j*j) + (i*i) + (k*k)) {
					cnt += 1;
					break;
				}
				for (l = k; (l*l) + (j*j) + (i*i) + (k*k) <= n; l++) {
					if ((i*i) + (j*j) + (k*k) + (l*l) == n) {
						cnt += 1;
						break;
					}


				}

				



			}
		}



	}
	printf("%d", cnt);

}