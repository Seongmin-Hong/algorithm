#include<stdio.h>

int main() {
	int e, f, c ,soda ,bin , s=0;
	
	scanf("%d %d %d", &e, &f, &c);
	         
	soda = (e + f) / c; 
	s += soda; 
             
	bin = (soda + ((e + f) % c)) % c;
	soda = (soda + ((e + f) % c)) / c;
				
	s += soda;
	soda = soda + bin;
	       
	while (soda>=c) {
		bin = 0;
		bin = soda % c;
		soda = soda / c;
		s += soda;
		soda = soda + bin;
		
	}
	printf("%d", s);
	
}

/*
	���� �Ҵ� = �� �� / 3
	���� �Ҵ� = �����Ҵ� + �� �� % 3
	���� �Ҵ� = �����Ҵ� + �����Ҵ� % 3

	
*/