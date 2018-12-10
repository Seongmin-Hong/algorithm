#include<stdio.h>

int main() {
	int n ,i;
	
	scanf("%d", &n);
	while (n!=1) {
		i = 2;
		while(1){
			if (!(n%i)) {
				printf("%d ", i);
				n /= i;
				break;
			}
			i++;
		}

	}


}