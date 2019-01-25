#include<stdio.h>
#include<stdlib.h>

struct Node {
	int data;
	struct Node *next;
};
// 8 2 3
int main() {
	int n, m, k;
	int i,cnt;
	
	scanf("%d %d %d", &n, &m, &k);

	struct Node *head, *p, *q;
	head = (struct Node*)malloc(sizeof(struct Node));
	p = head;
	p->data = 1;

	for (i = 2; i <= n; i++) {
		q = (struct Node*)malloc(sizeof(struct Node));
		q->data = i; // q->data = 2
		p->next = q; // p->next = 2
		p = q;		 // p = 2;
	}

	p->next = head;
	p = head;

	cnt = 1;

	while (cnt != m) {
		q = p;
		p = p->next;
		cnt++;
	}
	
	printf("%d ", p->data);
	cnt = 1;
	q->next = p->next;
	free(p);
	p = q->next;

	while (p != q) {
		q = p;
		p = p->next;
		cnt++;
		if (cnt == k) {
			printf("%d ", p->data);
			cnt = 1;
			q->next = p->next;
			free(p);
			p = q->next;
		}
	}
	
	printf("%d", p->data);
	free(p);

}