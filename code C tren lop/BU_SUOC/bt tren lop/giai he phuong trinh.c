#include <stdio.h>

void giaiHePhuongTrinh(int a, int b, int c, int d, int e) {
    int x, y, z;
    for (x = 1; x <= e; x++) {
        for (y = 1; y <= e; y++) {
            for (z = 1; z <= e; z++) {
                if (x + y + z == e && a * x + b * y + c * z == d) {
                    printf("x = %d, y = %d, z = %d\n", x, y, z);
                }
            }
        }
    }
}

int main() {
    int a, b, c, d, e;
    
    printf("Nhap gia tri a: ");
    scanf("%d", &a);
    
    printf("Nhap gia tri b: ");
    scanf("%d", &b);
    
    printf("Nhap gia tri c: ");
    scanf("%d", &c);
    
    printf("Nhap gia tri d: ");
    scanf("%d", &d);
    
    printf("Nhap gia tri e: ");
    scanf("%d", &e);
    
    printf("Cac nghiem nguyen duong cua he phuong trinh la:\n");
    giaiHePhuongTrinh(a, b, c, d, e);
    
    return 0;
}

