#include<stdio.h>
#include<math.h>

int pat() {
	int i;

}

int bir(int x, int y) {
	int arr1[8]{ 0, };
	int arr2[8]{ 0, };

	int j=0 , cnt = 0;

	while (1) {
		arr1[j] = x % 2;
		x /= 2;

		if (!x) break;
		j++;
	}
	j = 0;
	while (1) {
		arr2[j] = y % 3;
		y /= 3;

		if (!y) break;
		j++;
	}
	while (1) {
		
	}

	return 0;
	
}


int main() {
	
	

	int n, m, sum_1 = 0, sum_2 = 0;
	int i = 0, t = 10;

	scanf("%d %d", &n, &m);
	while (1) {

		if (n%t) {
			sum_1 += pow(2, i);
		}
		n /= t;
		if (!n) break;
		i++;
	}
	i = 0;

	while (1) {
		if (m%t) {
			sum_2 += pow(3, i) * (m%t);
		}
		m /= t;
		if (!m) break;
		i++;
	}

	bir(sum_1, sum_2);
}
/*

	#include<stdio.h>
int arr[31];

void pat(int a , int cnt,  int n, int k) {
    int i;
    if (k < cnt) return;
    if (a < n) {
 
        arr[a] = 1;
        pat(a + 1, cnt+1, n,k);
        arr[a] = 0;
        pat(a + 1, cnt, n,k);
     
    }
    if (k != cnt) return;
     
    if (a == n) {
        for (i = 0; i < n; i++) {
            printf("%d", arr[i]);
        }
        printf("\n");
    }
     
}
 
int main() {
    int n, k;
    scanf("%d %d", &n , &k);
 
    pat(0,0,n,k);
}
*/