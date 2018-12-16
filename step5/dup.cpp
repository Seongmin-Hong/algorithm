#include<stdio.h>
#define True 100


int main() {
	int n,i,j, flag;
	int arr[11];

	for (i = 1; i <= 10; i++) {
		scanf("%d", &n);
		arr[i] = n;
	}
	for (i = 1; i < 10; i++) {
		flag = 0;
		if (arr[i] != True) 
			for (j = i + 1; j <= 10; j++) {
				if (arr[i] == arr[j]) {
					flag = 1;
					arr[j] = True;
				}
			
			}
		if (flag) arr[i] = True;
	}
	for (i = 1; i <= 10; i++) {
		if (arr[i] < True) printf("%d ", arr[i]);
	}
}