#include <stdio.h>
void mountain(int stair)
{
	if (stair)
	{
		mountain(stair - 1);
		printf("%d", stair);
		mountain(stair - 1);
	}
}
int main()
{
	int n;
	scanf("%d", &n);
	mountain(n);
	return 0;
}