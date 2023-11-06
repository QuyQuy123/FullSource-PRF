#include <stdio.h>

unsigned long long factorial(int n) {
    if (n <= 1) {
        return 1;
    } else {
        return n * factorial(n - 2);
    }
}

int main() {
    int n, i;
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        unsigned long long result = 1;
        for ( i = 2; i <= n; i += 2) {
            result *= i;
        }
        printf("%d!! = %llu\n", n, result);
    } else {
        unsigned long long result = factorial(n);
        printf("%d!! = %llu\n", n, result);
    }

    return 0;
}

