#include<stdio.h>

int main() {
	int n[40], cnt = 0, t=0;;
	register int i;

	for (i = 0;i <= 40;i++) {
		scanf("%d", &n[i]);
		if (!n[i]) break;
		cnt++;
	}
	for (i = 1;i <= cnt;i++) {
		if (n[i] != n[i-1]) {
			printf("%d %d ", i-t, n[i-1]);
			t = i;
		}


	}
	
}

/*
	n[2]  n[1]
      2-1   1   
	  t = 1

*/