#include <stdio.h>
int stair(int n)
{
	if (n == 1 || n == 0)
		return 1;
	else
		return stair(n - 1) + stair(n - 2);
}
int main()
{
	int n;
	scanf("%d", &n);
	printf("%d", stair(n));
	return 0;
}