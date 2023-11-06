#include <stdio.h>
void generateFibonacciSeries (int *n){//
	printf("Nhap n:");
	scanf("%d", n);
}
int main() {
	int n, i;
	int a = 1, b = 1, next;
	generateFibonacciSeries(&n);

	if (n <= 0) {
		printf("Nhap n duong\n");
	} else if (n == 1) {
		printf("\nDay fibonacci :%d", a);
	} else {
		printf("Day fibonacci: "); 
		printf("%d %d ", a, b);
		for (i = 2; i < n; i++) {
			next = a + b;
			printf("%d ", next);
			a = b;
			b = next;
		}
		printf("\n");
	}

	return 0;
}