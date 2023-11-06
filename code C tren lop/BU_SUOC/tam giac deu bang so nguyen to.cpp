#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

void drawPrimeTriangle(int height) {
    int count = 2;
    for (int i = 1; i <= height; i++) {
        for (int j = 1; j <= height - i; j++) {
            printf(" ");
        }
        for (int j = 1; j <= 2 * i - 1; j++) {
            while (!isPrime(count)) {
                count++;
            }
            printf("%d ", count);
            count++;
        }
        printf("\n");
    }
}

int main() {
    int height;
    printf("Enter the height of the triangle: ");
    scanf("%d", &height);

    drawPrimeTriangle(height);

    return 0;
}

