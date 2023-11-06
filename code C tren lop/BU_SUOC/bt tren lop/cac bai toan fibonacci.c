#include <stdio.h>

// Ham tinh so Fibonacci thu n
int timSoFibonacci(int n) {
	int i;
    if (n <= 2) {
        return 1;
    } else {
        int a = 1, b = 1, c;
        for (i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}

// Ham tim so Fibonacci khong vuot qua m
void timFibonacciNhoHonHoacBangM(int m) {
    int a = 1, b = 1, c;
    printf("Cac so Fibonacci khong vuot qua %d là: 1 ", m);
    while (a + b <= m) {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    printf("\n");
}

// Ham tinh tong day m so Fibonacci dau tien
int tinhTongFibonacciDauTien(int m) {
    int a = 1, b = 1, c, tong = 2;
    int i;
    for ( i = 3; i <= m; i++) {
        c = a + b;
        tong += c;
        a = b;
        b = c;
    }
    return tong;
}

// Ham kiem tra xem n có là so Fibonacci khong
int kiemTraLaSoFibonacci(int n) {
    int a = 1, b = 1;
    while (b < n) {
        int c = a + b;
        a = b;
        b = c;
    }
    return (b == n);
}

// Ham phan tich so n thanh tong cua cac so Fibonacci phan biet
void phanTichThanhTongCacFibonacci(int n) {
    int a = 1, b = 1, c;
    printf("Phan tich %d thanh tong cac so Fibonacci phan biet: ", n);
    while (n > 0) {
        while (b <= n) {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%d ", a);
        n -= a;
        a = 1;
        b = 1;
    }
    printf("\n");
}

int main() {
    int luaChon;
    int n, m, n2, m2, x;
    do {
        printf("Menu:\n");
        printf("1. Tim so Fibonacci thu n\n");
        printf("2. Tim so Fibonacci khong vuot qua m\n");
        printf("3. Tinh tong day m so Fibonacci dau tien\n");
        printf("4. Kiem tra xem n co la so Fibonacci khong\n");
        printf("5. Phan tich n thanh tong cua cac so Fibonacci phan biet\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luaChon);
        
        switch (luaChon) {
            case 1:
                printf("Nhap gia tri n: ");
                scanf("%d", &n);
                int ketQua1 = timSoFibonacci(n);
                printf("So Fibonacci thu %d là: %d\n", n, ketQua1);
                break;
            case 2:
                printf("Nhap gia tri m: ");
                scanf("%d", &m);
                timFibonacciNhoHonHoacBangM(m);
                break;
            case 3:
                printf("Nhap gia tri m: ");
                scanf("%d", &m2);
                int ketQua2 = tinhTongFibonacciDauTien(m2);
                printf("Tong cua day %d so Fibonacci dau tien la: %d\n", m2, ketQua2);
                break;
            case 4:
                printf("Nhap mot so n: ");
                scanf("%d", &x);
                if (kiemTraLaSoFibonacci(x)) {
                    printf("%d là so Fibonacci.\n", x);
                } else {
                    printf("%d khong la so Fibonacci.\n", x);
                }
                break;
            case 5:
                printf("Nhap mot so n: ");
                scanf("%d", &n2);
                phanTichThanhTongCacFibonacci(n2);
                break;
             case 0:
                printf("K?t thúc chuong trình.\n");
                break;
            }
    } while (luaChon != 0);
    
    return 0;

}
    



