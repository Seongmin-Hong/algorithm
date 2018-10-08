#include<stdio.h>

int main() {
	int a, b;
	scanf("%d %d", &a, &b);

	if (b % 2 == 1) {
		printf("white");
	}
	else printf("black");
}
/*
   색이 같으면 -2a or -2b 후  +a
   색이 다르면 a-1 
  
  white 홀수면 
   
   3   1
   검검
   2   1         
   검검             검흰
   1   1          2   1


   흰색 2개를 뽑는경우 black
   검흰을 뽑을경우 white
   
   1   2     
   검흰		흰흰
   white    black
   
   3   2    
   검검		검흰	흰흰
   2   2   4   2    black
   검검     흰검
   1   2   3   2
			흰검
		   2   2
   
   */