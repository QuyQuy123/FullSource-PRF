#include <stdio.h>

int main() {
    double x, y, result;
    char c;

    printf("Nhap so thuc x va y: ");
    scanf("%lf%lf", &x, &y);

    printf("Nhap ky tu phep toan (+, -, *, /): ");
    scanf(" %c", &c);

    switch (c) {
        case '+':
            result = x + y;
            printf("Ket qua: %.2lf\n", result);
            break;
        case '-':
            result = x - y;
            printf("Ket qua: %.2lf\n", result);
            break;
        case '*':
            result = x * y;
            printf("Ket qua: %.2lf\n", result);
            break;
        case '/':
            if (y != 0) {
                result = x / y;
                printf("Ket qua: %.2lf\n", result);
            } else {
                printf("Loi\n");
            }
            break;
        
    }

    return 0;
}

