#include<stdio.h>

int main() {
    int i, m, n, k, sum = 0, nhan = 1;
    scanf("%d", &n);
    m = n;
    if (n / 10 == 0) {
        printf("no");
    } else {
        while (n / 10 != 0) {
            i = n % 10;
            sum += i;
            nhan *= i;
            n /= 10;
        }
        sum += n;  // Th�m d�ng n�y d? c?ng ch? s? cu?i c�ng c?a `n` v�o `sum`
        if (sum == m) {  // So s�nh v?i gi� tr? ban d?u c?a `n`
            printf("Yes");
        } else {
            printf("No");
        }
    }
    return 0;
}

