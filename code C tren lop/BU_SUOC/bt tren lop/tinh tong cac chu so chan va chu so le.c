#include <stdio.h>

int main() {
    int n, i, sum_even = 0, sum_odd = 0;

    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);


    for (i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            sum_even += i; 
        }else {
        sum_odd +=i;	
		}
    }
    printf("Tong cac so chan tu 1 den %d: %d\n", n, sum_even);
    printf("Tong cac so le tu 1 den %d: %d\n", n, sum_odd);
    return 0;
}

