#include <stdio.h>
int n;
int count;
void up(int stair)
{
	if (stair == n)
	{
		++count;
		return;
	}

	if (stair + 1 <= n)
		up(stair + 1);

	if (stair + 2 <= n)
		up(stair + 2);
}
int main()
{
	scanf("%d", &n);
	up(0);
	printf("%d", count);
	return 0;
}