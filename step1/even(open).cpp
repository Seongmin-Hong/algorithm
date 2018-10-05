#include<stdio.h>
#include<math.h>

int main() {
	int a, b, result , x;

	scanf("%d %d", &a, &b);
	
		
	result = b - a - (int)sqrt(b) + (int)sqrt(a-1);
	result += 1;

	printf("%d", result);
}
/*

È¦¼öÀÎ¼ö´Â Á¦°ö¼ö = (b-a)2½Â
Â¦¼ö = ÀüÃ¼ - (b-a)2½Â 
even = sqrt(b-a) - (b - a)
			b - a -  ( sqrt(b) - sqrt(a) )
			b - a - sqrt(b) + sqrt(a)

b-a = 14
17 - 3 - 14·çÆ®
14·çÆ® = 3.7416....
11.25....

a °¡ È¦¼ö¸é -1

*/