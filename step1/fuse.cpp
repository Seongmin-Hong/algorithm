#include<stdio.h>

int main() {
	
	double com, printer, rauter , result;
	

	scanf("%lf%lf%lf", &com, &printer, &rauter);
	
	com = com * 2.5;
	printer = printer * 2.0;
	rauter = rauter * 0.5;
	

	result =  (com + printer + rauter) * 2;
	

	printf("%d amperes", (((int)result + 9) / 10) *10);

}