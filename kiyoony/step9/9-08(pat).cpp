#include <stdio.h>
void pat(int step, int n, int count, int k, int val)
{
	if (step == n)
	{
		if (count != k)return;
		int c = step;
		while (c)
		{
			printf("%d", val & 1);
			val = (val >> 1);
			c -= 1;
		}
		printf("\n");
		return;
	}
	if (count != k)
		pat(step + 1, n, count + 1, k, val | (1 << step));
	pat(step + 1, n, count, k, val);
}
int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	pat(0, n, 0, k, 0);
	return 0;
}