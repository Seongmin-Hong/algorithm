#include<stdio.h>
#define SWAP(x,y) {int a; a=x; x=y; y=a;}

int main() {
	int x1, y1, x2, y2, x3, y3, x4, y4 ,result;
	int x_check = 0;
	int y_check = 0;
	scanf("%d %d %d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

	if ((x1<=x3 && x3<=x2) || (x1<=x4 && x4<=x2)) x_check++;
	if ((x3<=x1 && x1<=x4) || (x3<=x2 && x2<=x4)) x_check++;

	if ((y1 <= y3 && y3 <= y2) || (y1<= y4 && y4<= y2) ) y_check++;
	if ((y3 <= y1 && y1 <= y4) || (y3 <= y2 && y2 <= y4)) y_check++;

	result = x_check * y_check;
	if (result != 0) {
		printf("Overlap");
	}
	else printf("No overlap");

}
/*
1(1,1) 2(2,2)

3(2,2) 4(5,5)

점 1 2 사이에
점 3 4


x3 <= x1 x2<= x4 일때
y1 <= 


x1 x2 사이에 x3이나 4가 있을때
y1 y2 사이에 y3이나 4가 있을때
*/