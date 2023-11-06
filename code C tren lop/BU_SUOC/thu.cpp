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
        sum += n;  // Thêm dòng này d? c?ng ch? s? cu?i cùng c?a `n` vào `sum`
        if (sum == m) {  // So sánh v?i giá tr? ban d?u c?a `n`
            printf("Yes");
        } else {
            printf("No");
        }
    }
    return 0;
}

