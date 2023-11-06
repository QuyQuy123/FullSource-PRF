#include <stdio.h>

int main() {
    int number, digit, sum = 0, product = 1;

    printf("Nh?p vào m?t s? nguyên dýõng: ");
    scanf("%d", &number);

    int temp = number;  // Lýu gi? giá tr? ban ð?u c?a s?

    while (temp > 0) {
        digit = temp % 10;  // L?y ch? s? cu?i cùng c?a s?
        sum += digit;      // Tính t?ng các ch? s?
        product *= digit;  // Tính tích các ch? s?
        temp /= 10;        // Lo?i b? ch? s? cu?i cùng
    }

    if (sum == product) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }

    return 0;
}

