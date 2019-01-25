#include<stdio.h>
int arr[1000];
int medal[4];

void Swap(int arr[], int a, int b) {
	int t;
	t = arr[a];
	arr[a] = arr[b];
	arr[b] = t;
}


int main() {
	int n, i=0,j,k;
	int cnt =0;

	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
		if (arr[i] == 1) medal[1]++;
		else if (arr[i] == 2) medal[2]++;
		else medal[3]++;
	}


	j = n-1;
	k = n-1 - medal[3];
	for (i = 0; i < medal[1]; i++) {
		if (arr[i] == 3) {
			for (j; j > n - medal[3]; j--) {
				if (arr[j] == 1) {
					Swap(arr, i, j);
					cnt++;
					break;
				}
			}
		
		}
		else if (arr[i] == 2) {
			for (k; k >= medal[1]; k--) {
				if (arr[k] == 1) {
					Swap(arr, i, k);
					cnt++;
					break;
				}
			}
		}
		

	}
	for (i = 0; i < medal[1]; i++)
		if (arr[i] != 1) cnt++;
	for (i; i < medal[1] + medal[2]; i++)
		if (arr[i] != 2) cnt++;




	printf("%d", cnt);

}
/*
1 1 1 3 1 3 2 1 2 3 3 1 3 2 1 1 2 3 2 2 3 3   2 3 2 2 3 1 1 1 1 1 1 1 3 1 1 2 2 3 1 1 3 3 2 1 1 1 3 2

																					   47 48 49
1 1 1 1 1  1 2 1 2 1  1 1 1 2 1  1 2 1 2 2  1 1 // 2 3 2 2 3 1 1 1 1 1 1 3 3 // 3 3 2 2 3  3 3 3 3 2  3 3 3 3 2


20
1 1 3 2 1 1 1 3 2 1   3 3 2 1   3 1 1 2 3 1
1 1 1 2 1 1 1 1 2 1   3 3 2 1   3 3 3 2 3 1
1 1 1 1 1 1 1 1 2 1   3 3 2 2   3 3 3 2 3 1
                1                         2
				      2 2 2 2   3 3 3 2 




*/