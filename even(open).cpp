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

Ȧ���μ��� ������ = (b-a)2��
¦�� = ��ü - (b-a)2�� 
even = sqrt(b-a) - (b - a)
			b - a -  ( sqrt(b) - sqrt(a) )
			b - a - sqrt(b) + sqrt(a)

b-a = 14
17 - 3 - 14��Ʈ
14��Ʈ = 3.7416....
11.25....

a �� Ȧ���� -1
a �� ¦���� +1
b �� Ȧ���� -1
b �� ¦���� +1

*/