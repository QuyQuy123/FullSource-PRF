#include <stdio.h>

int main() {
    int number, digit, sum = 0, product = 1;

    printf("Nh?p v�o m?t s? nguy�n d��ng: ");
    scanf("%d", &number);

    int temp = number;  // L�u gi? gi� tr? ban �?u c?a s?

    while (temp > 0) {
        digit = temp % 10;  // L?y ch? s? cu?i c�ng c?a s?
        sum += digit;      // T�nh t?ng c�c ch? s?
        product *= digit;  // T�nh t�ch c�c ch? s?
        temp /= 10;        // Lo?i b? ch? s? cu?i c�ng
    }

    if (sum == product) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

