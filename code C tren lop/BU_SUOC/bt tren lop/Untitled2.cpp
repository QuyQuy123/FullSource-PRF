#include <stdio.h>
#include <string.h>

#define MAX_SINHVIEN 100
#define MAX_TENSV 50

// Khai báo nguyên m?u hàm
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

// Ham them sinh vien vao danh sach
void themSinhVien(char danhSachSinhVien[MAX_SINHVIEN][MAX_TENSV], int* soLuong) {
    int i = 0;

    while (i < MAX_SINHVIEN && *soLuong < MAX_SINHVIEN) {
        printf("Nhap ten cua sinh vien (nhap 'q' de ket thuc): ");
        getchar(); // Ð?c và lo?i b? k? t? newline trý?c khi s? d?ng fgets
        fgets(danhSachSinhVien[*soLuong], sizeof(danhSachSinhVien[*soLuong]), stdin);
        danhSachSinhVien[*soLuong][strcspn(danhSachSinhVien[*soLuong], "\n")] = 0; // Lo?i b? d?u newline

        if (strcmp(danhSachSinhVien[*soLuong], "q") == 0) {
            break;
        }

        (*soLuong)++;
        i++;
    }

    printf("Them sinh vien thanh cong.\n");
}

// Ham xoa mot sinh vien khoi danh sach
void xoaSinhVien(char danhSachSinhVien[MAX_SINHVIEN][MAX_TENSV], int* soLuong) {
    char tenXoa[MAX_TENSV];
    printf("Nhap ten cua sinh vien can xoa: ");
    getchar(); // Ð?c và lo?i b? k? t? newline trý?c khi s? d?ng fgets
    fgets(tenXoa, sizeof(tenXoa), stdin);
    tenXoa[strcspn(tenXoa, "\n")] = 0; // Lo?i b? d?u newline

    for (int i = 0; i < *soLuong; i++) {
        if (strcmp(danhSachSinhVien[i], tenXoa) == 0) {
            for (int j = i; j < *soLuong - 1; j++) {
                strcpy(danhSachSinhVien[j], danhSachSinhVien[j + 1]);
            }
            (*soLuong)--;
            printf("Xoa sinh vien thanh cong.\n");
            return;
        }
    }

    printf("Khong tim thay sinh vien trong danh sach.\n");
}

// Ham tim kiem mot sinh vien trong danh sach
void timKiemSinhVien(char danhSachSinhVien[MAX_SINHVIEN][MAX_TENSV], int soLuong) {
    char tenCanTim[MAX_TENSV];
    printf("Nhap ten cua sinh vien can tim: ");
    getchar(); // Ð?c và lo?i b? k? t? newline trý?c khi s? d?ng fgets
    fgets(tenCanTim, sizeof(tenCanTim), stdin);
    tenCanTim[strcspn(tenCanTim, "\n")] = 0; // Lo?i b? d?u newline

    for (int i = 0; i < soLuong; i++) {
        if (strcmp(danhSachSinhVien[i], tenCanTim) == 0) {
            printf("Sinh vien duoc tim thay tai vi tri %d.\n", i + 1);
            return;
        }
    }
    printf("Khong tim thay sinh vien trong danh sach.\n");
}

// Ham in danh sach theo thu tu tang dan
void inDanhSach(char danhSachSinhVien[MAX_SINHVIEN][MAX_TENSV], int soLuong) {
    if (soLuong == 0) {
        printf("Danh sach trong.\n");
        return;
    }
    printf("Danh sach sinh vien theo thu tu tang dan:\n");
    for (int i = 0; i < soLuong; i++) {
        printf("%d. %s\n", i + 1, danhSachSinhVien[i]);
    }
}

