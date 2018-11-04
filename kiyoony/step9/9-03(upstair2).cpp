#include <stdio.h>
// fibonacci
// dynamic programming
int main()
{
	int stair[31] = { 1, 1 };
	int n;
	scanf("%d", &n);
	for (int i = 2; i <= n; ++i)
	{
		stair[i] = stair[i - 1] + stair[i - 2];
	}
	printf("%d", stair[n]);
	return 0;
}