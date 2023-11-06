#include <stdio.h>

void timNghiemNguyenDuong(int a, int b, int c) {
	int x; 
    for ( x = 1; x <= c / a; x++) {
        int y = (c - a * x) / b;
        if (a * x + b * y == c && y >= 1 && (c - a * x) % b == 0) {
            printf("x = %d, y = %d\n", x, y);
        }
    }
}

int main() {
    int a, b, c;
    
    printf("Nhap gia tri a, b, c: ");
    scanf("%d%d%d", &a, &b, &c);
    
    printf("Cac nghiem nguyen duong cua phuong trinh la:\n");
    timNghiemNguyenDuong(a, b, c);
    
    return 0;
}

