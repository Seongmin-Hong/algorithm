#include <stdio.h>
int sfn(int n, int mod)
{
	if (n)
		return (n % mod) + sfn(n / mod, mod);
	else
		return 0;
}
int main()
{	
	for (int i = 1000; i < 10000; ++i)
	{
		int val10 = sfn(i, 10);
		int val12 = sfn(i, 12);
		int val16 = sfn(i, 16);
		if (val10 == val12 && val10 == val16)
		{
			printf("%d\n", i);
		}
	}
	return 0;
}