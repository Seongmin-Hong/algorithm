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
   ���� ������ -2a or -2b ��  +a
   ���� �ٸ��� a-1 
  
  white Ȧ���� 
   
   3   1
   �˰�
   2   1         
   �˰�             ����
   1   1          2   1


   ��� 2���� �̴°�� black
   ������ ������� white
   
   1   2     
   ����		����
   white    black
   
   3   2    
   �˰�		����	����
   2   2   4   2    black
   �˰�     ���
   1   2   3   2
			���
		   2   2
   
   */