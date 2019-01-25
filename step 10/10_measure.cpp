#include<stdio.h>
int arr[1000];
int mid;

int move(int x, int middle) {
	if (x > middle) x = middle * 2 - x;
	return x;
}
int move2(int y, int middle2) {
	if (y < middle2) y = middle2 * 2 - y;
	return y;
}

int main() {
	double m,f_m=0 ,l_m;
	double R1, B1, Y1;
	double R2, B2, Y2;

	scanf("%lf", &m);
	scanf("%lf %lf", &R1, &R2);
	scanf("%lf %lf", &B1, &B2);
	scanf("%lf %lf", &Y1, &Y2);
	l_m = m;

	mid = (R1 + R2) / 2;

	if (mid - f_m > l_m - mid) {
		move(B1, mid);
		move(B2, mid);
		move(Y1, mid);
		move(Y2, mid);

		m = m - (l_m - mid);
		l_m = mid;
	}
	else {
		move(B1, mid);
		move(B2, mid);
		move(Y1, mid);
		move(Y2, mid);

		m = m - (mid - f_m);
		f_m = mid;
	}
	
	mid = (B1 + B2) / 2;
	if (mid - f_m > l_m - mid) {
		move(Y1, mid);
		move(Y2, mid);

		m = m - (l_m - mid);
		l_m = mid;
	}
	else {
		move(Y1, mid);
		move(Y2, mid);
	
		m = m - (mid - f_m);
		f_m = mid;
	}

	mid = (Y1 + Y2) / 2;

	if (mid - f_m > l_m - mid) 
		m = m - (l_m - mid);
	
	
	else m = m - (mid - f_m);
	

	printf("%.1lf", m);
}
/*
준성이는 1 cm 간격으로 눈금이 매겨져 있는 줄자를 가지고 있다.

그 줄자에 있는 서로 다른 눈금 6개에 한 눈금에 하나씩 점이 찍혀 있는데, 빨간 점, 파란 점, 노란 점이 각각 두 개씩 있다.

준성이는 먼저 두 빨간 점이 만나도록 줄자를 접었다. 그런 후 두 파란 점이 만나도록 줄자를 접고, 또다시 두 노란 점이 만나도록

줄자를 접었다. 줄자는 투명하여 접더라도 점들을 잘 볼 수 있다.

어떤 색깔의 두 점이 만나도록 줄자를 접었을 때, 그 다음에 접으려는 색깔의 두 점이 이미 만나고 있으면, 

그 두 점에 대해서는 줄자를 접지 않는다.

예를 들어 길이 10 cm인 줄자에 아래 그림과 같이 2 cm와 7 cm 위치에 두 빨간 점이 찍혀 있고,

5 cm와 4 cm 위치에 파란 점이, 10 cm와 3 cm 위치에 노란 점이 찍혀 있다고 하자. 

(그림에서 빨간 점은 별표로, 파란 점은 동그라미, 그리고 노란 점은 네모로 표시되어 있다.)

빨간 두 점이 만나도록 줄자를 접으면 줄자의 4.5 cm 위치에서 접히고 4 cm와 5 cm 눈금이 서로 만나게 된다.

그러면 줄자의 왼쪽 부분의 길이는 4.5 cm이고 오른쪽 부분의 길이는 5.5 cm가 되어

, 접힌 줄자의 길이는 5.5 cm가 된다. 파란 두 점은 이미 만나므로 줄자를 접지 않고, 

그런 다음 노란 두 점이 만나도록 접으면 줄자의 길이는 3.5 cm가 된다.

4.5  5.5


*/