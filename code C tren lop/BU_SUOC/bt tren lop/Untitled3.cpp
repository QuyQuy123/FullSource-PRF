#include <stdio.h>

int main() {
    int n;
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    double a[n];
    for (int i = 0; i < n; i++) {
        printf("Nhap gia tri cho a[%d]: ", i);
        scanf("%lf", &a[i]);
    }

    double sum_A = 0;
    double sum_B = 0;
    int sign = 1;

    for (int i = 0; i < n; i++) {
        sum_A += a[i];
        sum_B += sign * a[i];
        sign = -sign;
    }

    printf("Tong A: %lf\n", sum_A);
    printf("Tong B: %lf\n", sum_B);

    if (sum_A > sum_B) {
        printf("Tong A lon hon Tong B: %lf\n", sum_A);
    } else if (sum_B > sum_A) {
        printf("Tong B lon hon Tong A: %lf\n", sum_B);
    } else {
        printf("Tong A va Tong B bang nhau: %lf\n", sum_A);
    }

    return 0;
}

