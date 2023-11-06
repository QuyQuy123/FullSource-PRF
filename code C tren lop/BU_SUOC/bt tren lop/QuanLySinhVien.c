#include <stdio.h>
#include <string.h>
#define MAX_SINHVIEN 100
#define MAX_TENSV 50

void themSinhVien(char danhSachSinhVien[MAX_SINHVIEN][MAX_TENSV], int* soLuong);
void xoaSinhVien(char danhSachSinhVien[MAX_SINHVIEN][MAX_TENSV], int* soLuong);
void timKiemSinhVien(char danhSachSinhVien[MAX_SINHVIEN][MAX_TENSV], int soLuong);
void inDanhSach(char danhSachSinhVien[MAX_SINHVIEN][MAX_TENSV], int soLuong);

int main() {
    char tenSinhVien[MAX_SINHVIEN][MAX_TENSV];
    int soLuongSinhVien = 0;
    int luaChon;

    while (1) {
        printf("\nMenu Quan Ly Danh Sach Sinh Vien:\n");
        printf("1. Them sinh vien\n");
        printf("2. Xoa sinh vien\n");
        printf("3. Tim kiem sinh vien\n");
        printf("4. In danh sach theo thu tu tang dan\n");
        printf("5. Thoat\n");
        printf("Nhap lua chon cua ban: ");
        scanf("%d", &luaChon);

        switch (luaChon) {
            case 1:
                themSinhVien(tenSinhVien, &soLuongSinhVien);
                break;
            case 2:
                xoaSinhVien(tenSinhVien, &soLuongSinhVien);
                break;
            case 3:
                timKiemSinhVien(tenSinhVien, soLuongSinhVien);
                break;
            case 4:
                inDanhSach(tenSinhVien, soLuongSinhVien);
                break;
            case 5:
                printf("Tam biet!\n");
                return 0;
            default:
                printf("Lua chon khong hop le. Hay thu lai.\n");
        }
    }

    return 0;
}

void themSinhVien(char danhSachSinhVien[MAX_SINHVIEN][MAX_TENSV], int* soLuong) {
    int i = 0;
    while (i < MAX_SINHVIEN && *soLuong < MAX_SINHVIEN) {
        printf("Nhap ten cua sinh vien (nhap '0' de ket thuc): ");
        scanf(" %[^\n]", danhSachSinhVien[*soLuong]);
        if (strcmp(danhSachSinhVien[*soLuong], "0") == 0) {
            break;
        }
        (*soLuong)++;
        i++;
    }
    printf("Them sinh vien thanh cong.\n");
}

void xoaSinhVien(char danhSachSinhVien[MAX_SINHVIEN][MAX_TENSV], int* soLuong) {
    char tenXoa[MAX_TENSV];
    printf("Nhap ten cua sinh vien can xoa: ");
    getchar(); 
    fgets(tenXoa, sizeof(tenXoa), stdin);
    tenXoa[strcspn(tenXoa, "\n")] = 0; 
    int i,j; 
    for ( i = 0; i < *soLuong; i++) {
        if (strcmp(danhSachSinhVien[i], tenXoa) == 0) {
            for (j = i; j < *soLuong - 1; j++) {
                strcpy(danhSachSinhVien[j], danhSachSinhVien[j + 1]);
            }
            (*soLuong)--;
            printf("Xoa sinh vien thanh cong.\n");
            return;
        }
    }
    printf("Khong tim thay sinh vien trong danh sach.\n");
}

void timKiemSinhVien(char danhSachSinhVien[MAX_SINHVIEN][MAX_TENSV], int soLuong) {
    char tenCanTim[MAX_TENSV];
    printf("Nhap ten cua sinh vien can tim: ");
    getchar();
    fgets(tenCanTim, sizeof(tenCanTim), stdin);
    tenCanTim[strcspn(tenCanTim, "\n")] = 0; 
    int i; 
    for (i = 0; i < soLuong; i++) {
        if (strcmp(danhSachSinhVien[i], tenCanTim) == 0) {
            printf("Sinh vien duoc tim thay tai vi tri %d.\n", i + 1);
            return;
        }
    }
    printf("Khong tim thay sinh vien trong danh sach.\n");
}

void inDanhSach(char danhSachSinhVien[MAX_SINHVIEN][MAX_TENSV], int soLuong) {
    if (soLuong == 0) {
        printf("Danh sach trong.\n");
        return;
    }
    printf("Danh sach sinh vien theo thu tu tang dan:\n");
    int i; 
    for (i = 0; i < soLuong; i++) {
        printf("%d. %s\n", i + 1, danhSachSinhVien[i]);
    }
}

