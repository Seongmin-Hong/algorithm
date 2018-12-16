#include<stdio.h>

int main() {
	int n,m,i,j,k, max;
	int same, total = 0 , sum;
	int arr[4];

	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		max = 0;
		same = 100;
		sum = 0;

		for (j = 1; j <= 3; j++) {
			scanf("%d", &m);
			arr[j] = m;
			if (max < arr[j]) max = arr[j];
		}

		for (j = 1; j <= 2; j++) {
			if (same == 10000) break;
			for (k = j + 1; k <= 3; k++) {
				if (arr[j] == arr[k]) same *= 10;
			}
		}
			

		if (same == 10000) sum = same + (max * 1000);
		else if(same == 1000) sum = same + (max * 100);
		else sum = max * same;

		if (total < sum) total = sum;
	}
	printf("%d", total);

}