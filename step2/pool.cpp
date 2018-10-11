#include<stdio.h>
#define MAX(x,y){int temp; if(x<y){temp = y; y = x; x = temp}}
#define MIN(x,y){if(x<)}


int main() {
	int n,a[8],result,x,y , check ,t_f;
	register int i;
	
	t_f = 0;
	x = 0;
	y = 0;

	scanf("%d", &n);
	for (i = 0;i < n*2;i++) {
		scanf("%d",&a[i]);
	}
	
	switch (n) {
		
	case 1:
		break;
	
	case 2:	
		x = a[0] - a[2];
		y = a[1] - a[3];
		break;

	case 3: 
		if (a[0] == a[2]) x = a[0] -a[4];
		if (a[0] == a[4]) x = a[0] -a[2];
		if (a[4] == a[2]) x = a[2] -a[0];

		if (a[1] == a[3]) y = a[1]-a[5];
		if (a[1] == a[5]) y = a[1]-a[3];
		if (a[3] == a[5]) y = a[3]-a[1];

		break;
	case 4:
		if (a[0] == a[2]) x = a[0] - a[4];
		if (a[0] == a[4]) x = a[0] - a[2];
		if (a[0] == a[6]) x = a[0] - a[2];

		if (a[1] == a[3]) y = a[1] - a[5];
		if (a[1] == a[5]) y = a[1] - a[3];
		if (a[1] == a[7]) y = a[1] - a[3];
		break;
	}

	t_f = x * y == 0 ? 1 : 0;
	result = x * y;
	result = result < 0 ? -result : result;
	
	t_f == 1 ? printf("-1") : printf("%d", result);
}
