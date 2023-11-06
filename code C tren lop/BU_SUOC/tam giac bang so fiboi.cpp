#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    int a = 0;
    int b = 1;
    int fibo = 0;

    for (int i = 2; i <= n; i++) {
        fibo = a + b;
        a = b;
        b = fibo;
    }

    return fibo;
}

void drawFibonacciSeries(int length) {
    printf("Fibonacci series: ");
    for (int i = 0; i < length; i++) {
        int fibo = fibonacci(i);
        printf("%d ", fibo);
    }
    printf("\n");
}

int main() {
    int length;
    printf("Enter the length of the series: ");
    scanf("%d", &length);

    drawFibonacciSeries(length);

    return 0;
}

 
