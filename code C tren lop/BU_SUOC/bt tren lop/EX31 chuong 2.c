#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int loaiBoChuSoDeCoSoBeNhat(int num, int k) {
    char chuoiSo[20];
    sprintf(chuoiSo, "%d", num);
    int doDai = strlen(chuoiSo);
	int i, l;
    if (k >= doDai) {
        return 0;
    }

    for (i = 0; i < k; i++) {
        int j = 0;
        while (j < doDai - 1 && chuoiSo[j] <= chuoiSo[j + 1]) {
            j++;
        }

        for ( l = j; l < doDai; l++) {
            chuoiSo[l] = chuoiSo[l + 1];
        }
        doDai--;
    }

    int ketQua = atoi(chuoiSo);
    return ketQua;
}

int main() {
    int soNguyen, soChuSoXoa;
    printf("Nhap so nguyen: ");
    scanf("%d", &soNguyen);
    printf("Nhap so luong chu so can xoa: ");
    scanf("%d", &soChuSoXoa);

    int ketQua = loaiBoChuSoDeCoSoBeNhat(soNguyen, soChuSoXoa);
    
    printf("So sau khi xoa %d chu so de co gia tri be nhat la: %d\n", soChuSoXoa, ketQua);

    return 0;
}

