#include<stdio.h>
#define MIN 500000

int main() {
	int per, money, hotel, week, cost;
	int total_cost , can_week, flat = 0;
	int i,j;
	int min = MIN;

	scanf("%d %d %d %d", &per, &money, &hotel, &week);

	for (i = 1; i <= hotel; i++) {
		scanf("%d", &cost);
		
		for (j = 1; j <= week; j++) {
			scanf("%d", &can_week);
			
			if (can_week >= per) {
				total_cost = cost * per;
				
				if (total_cost <= money) {
					if (min >= total_cost) min = total_cost;
					flat = 1;
				}

			}

		}


	}
	flat ?  printf("%d",min) : printf("stay home");
}