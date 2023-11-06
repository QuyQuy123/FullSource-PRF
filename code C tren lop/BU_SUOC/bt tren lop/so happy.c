#include <stdio.h>

int tinhTongChuSo(int n) {
    int tong = 0;
    while (n > 0) {
        tong += n % 10;
        n /= 10;
    }
    return tong;
}

int laSoHanhPhuc(int n) {
    int tong_dau = tinhTongChuSo(n / 1000);
    int tong_cuoi = tinhTongChuSo(n % 1000);
    return tong_dau == tong_cuoi;
}

int main() {
	int i; 
    printf("Cac so hanh phuc nho hon 1.000.000 la:\n");
    
    for ( i = 1; i < 1000000; i++) {
        if (laSoHanhPhuc(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}

