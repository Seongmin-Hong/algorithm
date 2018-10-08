#include<stdio.h>

int main() {
	int weight, power ,check;
	double speed;
	check = 0;
	scanf("%lf %d %d", &speed, &weight, &power);

	if (speed <= 4.5 && weight>=150 && power>=200) {
		printf("Wide Receiver ");
		check++;
	}
	if (speed <= 6.0 && weight >= 300 && power >= 500) {
		printf("Lineman ");
		check++;
	}
	if (speed <= 5.0 && weight >= 200 && power >= 300) {
		printf("Quarterback ");
		check++;
	}
	
	if (check == 0) printf("No positions");
}