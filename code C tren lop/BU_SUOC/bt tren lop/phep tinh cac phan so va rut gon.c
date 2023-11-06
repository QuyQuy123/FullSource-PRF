#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0) {
        return a;
    }
    return gcd(b, a % b);
}

void rutGonPhanSo(int *tuSo, int *mauSo) {
    int common = gcd(*tuSo, *mauSo);
    *tuSo /= common;
    *mauSo /= common;
}

int main() {
    int a, b, c, d;
    
    printf("Nhap phan so thu nhat a/b:");
    scanf("%d%d", &a,&b);
	printf("Nhap phan so thu hai c/d:");
    scanf("%d%d", &c,&d);
	 
    int tongTuSo = a * d + b * c;
    int tongMauSo = b * d;
    rutGonPhanSo(&tongTuSo, &tongMauSo);
    
    int hieuTuSo = a * d - b * c;
    int hieuMauSo = b * d;
 	rutGonPhanSo(&hieuTuSo, &hieuMauSo);
    
    int tichTuSo = a * c;
    int tichMauSo = b * d;
    rutGonPhanSo(&tichTuSo, &tichMauSo);
    
    int thuongTuSo = a * d;
    int thuongMauSo = b * c;
    rutGonPhanSo(&thuongTuSo, &thuongMauSo);
    
    printf("Tong: %d/%d\n", tongTuSo, tongMauSo);
    printf("Hieu: %d/%d\n", hieuTuSo, hieuMauSo);
    printf("Tich: %d/%d\n", tichTuSo, tichMauSo);
    printf("Thuong: %d/%d\n", thuongTuSo, thuongMauSo);

    return 0;
}

