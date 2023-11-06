#include <stdio.h>
#include <stdbool.h>

// Hàm kiểm tra một số có phải là số nguyên tố hay không
bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int n;
    printf("Nhap so dong n: ");
    scanf("%d", &n);

    int num = 2;

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            while (!isPrime(num)) {
                num++;
            }
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
