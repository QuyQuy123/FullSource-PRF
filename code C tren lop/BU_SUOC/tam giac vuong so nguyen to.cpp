#include <stdio.h>

int is_prime(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

int main() {
    int n;
    scanf("%d", &n);

    if (n < 1) {
        return 1;
    }

    int prime = 2;
    for (int i = n; i >=1; i--) {
        for (int j = 1; j <= i ; j++) {
            while (!is_prime(prime)) prime++;
            printf("%d ", prime++);
        }
        printf("\n");
    }

    return 0;
}

