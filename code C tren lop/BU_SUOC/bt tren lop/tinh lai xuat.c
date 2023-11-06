#include<stdio.h>


float tinhTienSauKThang(float n, float t, int k) {
	int i;
    for (i = 0; i < k; i++) {
        n += n * (t / 100);
    }
    return n;
}
int main(){
    float t, n, m;
    int k, chonCase;

    printf("Chon case (1/2/3):\n");
    scanf("%d", &chonCase);

    switch (chonCase) {
        case 1:
            printf("Nhap lai xuat (t%%): ");
            scanf("%f", &t);
            printf("Nhap so von ban dau (n): ");
            scanf("%f", &n);
            printf("Nhap so thang can gui (k): ");
            scanf("%d", &k);
            printf("So tien sau %d thang là: %.2f\n", k, tinhTienSauKThang(n, t, k));
            break;
        case 2:
            printf("Nhap lai suat hang thang (t%%): ");
            scanf("%f", &t);
            printf("Nhap so von ban dau (n): ");
            scanf("%f", &n);
            printf("Nhap so tien can nhan (m): ");
            scanf("%f", &m);
            k = 0;
            while (n < m) {
                n += n * (t / 100);
                k++;
            }
            printf("So thang can gui de duoc so tien %.2f la: %d\n", m, k);
            break;
        case 3:
            printf("Nhap lai suat hang thang (t%%): ");
            scanf("%f", &t);
            printf("Nhap so thang can gui (k): ");
            scanf("%d", &k);
            printf("Nhap so tien can nhan (m): ");
            scanf("%f", &m);
            float vonBanDau = m / (1 + (t / 100), k);
            printf("So von ban dau can gui de duoc so tien %.2f trong %d thang là: %.2f\n", m, k, vonBanDau);
            break;
    }

    return 0;
}

