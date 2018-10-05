#include<stdio.h>
#include<math.h>

int main() {
	int cost, money, result;
	
	scanf("%d %d", &cost, &money);

	money = pow(10 , money);
					
	result = ((cost + (money/2)) / money) * money;
				

	printf("%d", result);



}

