#include<stdio.h>
#define SWAP(x,y){int temp; temp=x; x=y; y=temp;}

int main() {
	int a1, a2, b1, b2;
	scanf("%d %d %d %d", &a1, &a2, &b1, &b2);

	if (a1 > a2) SWAP(a2, a1);
	if (b1 > b2) SWAP(b2, b1);

	if ((a1 < b1 && a1 < b2) && (b1 < a2 && b2 < a2)) {
		printf("not cross");
	}
	else if (a1 > b1 && a2 < b2) {
		printf("not cross");
	}
	else if ((a1 > b1 && a1 > b2) || (a2 < b1 && a2 < b2)) {
		printf("not cross");
	}
	else printf("cross");
}

/*
	not cross 일때
	a1 <b1, b2 <a2 이거나
	
	a1 > b1 a2 < b2
	
	a2 < b1,b2


	10 90
	90 99


	#include <stdio.h>

void main()
{
	int a, b, c, d, i;
	scanf("%d %d %d %d", &a, &b, &c, &d);
	if(b>a) {i=a; a=b; b=i;}
	i=0;
	if(b<c&&c<a) i++;
	if(b<d&&d<a) i++;
	if(i==1) printf("cross");
	else printf("not cross");
}


*/