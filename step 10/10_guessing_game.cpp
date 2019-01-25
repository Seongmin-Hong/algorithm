#include <stdio.h>
#include <string.h>

int main()
{
	int n ,flag=0;
	char ck1[6],ck2[6];
	int low=1, high=10;

	while (1) {
		scanf("%d", &n);
		scanf("%s %s", ck1,ck2);
		if (ck2[0] == 'o') {
			if (flag || low > n || n > high)
				printf("Stan is dishonest");
			else printf("Stan may be honest");
			break;
		}
		else if (ck2[0] == 'l') {
			if (high < n+1) flag = 1;
			if (low < n+1) low = n+1;
		}
		else if (ck2[0] == 'h') {
			if (n - 1 < low) flag = 1;
			if (n - 1 < high) high = n - 1;
		}


	}
}