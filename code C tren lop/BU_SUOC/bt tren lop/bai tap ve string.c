#include <stdio.h>
#include <string.h>
#include <stdlib.h>


/* tach cac tu trong xau

int main() {
    char xau_ky_tu[1000];
    char mang_tu[100][100];

    printf("Nhap xau ky tu: ");
    gets(xau_ky_tu);

    int n = 0; 
	int i;
    char *token = strtok(xau_ky_tu, " ");

    while (token != NULL) {
        strcpy(mang_tu[n], token); 
        n++;
        token = strtok(NULL, " "); 
    }

    printf("Cac tu trong mang:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", mang_tu[i]);
    }

    return 0;
}
/* sap xep mang cac tu thanh day tang/ giam dan


int compareTangDan(const void *a, const void *b) {
    return strcmp(*(const char **)a, *(const char **)b);
}

int compareGiamDan(const void *a, const void *b) {
    return strcmp(*(const char **)b, *(const char **)a);
}

int main() {
    char xau_ky_tu[1000];
    char mang_tu[100][100];
    char* mang_tu_tang_dan[100];
    char* mang_tu_giam_dan[100];

    printf("Nhap xau ky tu: ");
    gets(xau_ky_tu);

    int n = 0;
	int i;
    char *token = strtok(xau_ky_tu, " ");
    while (token != NULL) {
        strcpy(mang_tu[n], token);
        mang_tu_tang_dan[n] = mang_tu[n]; 
        mang_tu_giam_dan[n] = mang_tu[n]; 
        n++;
        token = strtok(NULL, " ");
    }
   
    qsort(mang_tu_tang_dan, n, sizeof(char *), compareTangDan);

    printf("Day tu sap xep tang dan:\n");
    for ( i = 0; i < n; i++) {
        printf("%s\n", mang_tu_tang_dan[i]);
    }

    qsort(mang_tu_giam_dan, n, sizeof(char *), compareGiamDan);

    printf("Day tu sap xep giam dan:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", mang_tu_giam_dan[i]);
    }

    return 0;
}
/* thay doi tu thu 3 trong xau thanh tu dao nguoc cua no


int main() {
    char xau_ky_tu[1000];
	int i;

    printf("Nhap xau ky tu: ");
    gets(xau_ky_tu);

    char mang_tu[100][100]; 
    int n = 0; 
    char *token = strtok(xau_ky_tu, " "); 

    while (token != NULL) {
        strcpy(mang_tu[n], token); 
        n++;
        token = strtok(NULL, " ");
    }

    if (n >= 3) {
        char *tu_thu_3 = mang_tu[2]; 
        int do_dai = strlen(tu_thu_3);

        for ( i = 0; i < do_dai / 2; i++) {
            char temp = tu_thu_3[i];
            tu_thu_3[i] = tu_thu_3[do_dai - 1 - i];
            tu_thu_3[do_dai - 1 - i] = temp;
        }
    }


    printf("Xau ket qua sau khi thay doi tu thu 3:\n");

    for (i = 0; i < n; i++) {
        printf("%s", mang_tu[i]);

        if (i < n - 1) {
            printf(" ");
        }
    }

    return 0;
}

/* viet hoa tat ca cac ky tu trong tu thu 2

int main() {
    char xau_ky_tu[1000];
	int i;
	
    printf("Nhap xau ky tu: ");
    gets(xau_ky_tu);

    char mang_tu[100][100];
    int n = 0;

    char *token = strtok(xau_ky_tu, " "); 

    while (token != NULL) {
        strcpy(mang_tu[n], token); 
        n++;
        token = strtok(NULL, " ");
    }

    if (n >= 2) {
        char *tu_thu_2 = mang_tu[1]; 
        for (i = 0; tu_thu_2[i]; i++) {
            tu_thu_2[i] = toupper(tu_thu_2[i]);
        }
    }

    printf("Xau ket qua sau khi viet hoa tu thu hai:\n");

    for ( i = 0; i < n; i++) {
        printf("%s", mang_tu[i]);

        if (i < n - 1) {
            printf(" ");
        }
    }

    return 0;
}
/* viet hoa tat ca cac ky tu trong tu thu 1, 3, 5

int main() {
    char xau_ky_tu[1000];
	int i, j;
	
    printf("Nhap xau ky tu: ");
    gets(xau_ky_tu);

    char mang_tu[100][100]; 
    int n = 0; 

    char *token = strtok(xau_ky_tu, " "); 

    while (token != NULL) {
        strcpy(mang_tu[n], token); 
        n++;
        token = strtok(NULL, " "); 
    }


    for (i = 0; i < n; i += 2) {
        char *tu = mang_tu[i];
        for ( j = 0; tu[j]; j++) {
            tu[j] = toupper(tu[j]);
        }
    }

    printf("Xau ket qua sau khi viet hoa tu thu 1, 3, 5,...:\n");

    for (i = 0; i < n; i++) {
        printf("%s", mang_tu[i]);

        if (i < n - 1) {
            printf(" ");
        }
    }

    return 0;
}
/*/// xoa tu dau tien va cuoi cung trong xau


int main() {
    char xau_ky_tu[1000];
	int i; 
	
    printf("Nhap xau ky tu: ");
    gets(xau_ky_tu);

    int do_dai = strlen(xau_ky_tu);

    int vi_tri_bat_dau = 0;
    int vi_tri_ket_thuc = do_dai - 1;

    while (xau_ky_tu[vi_tri_bat_dau] == ' ' || xau_ky_tu[vi_tri_bat_dau] == '\t') {
        vi_tri_bat_dau++;
    }

    while (xau_ky_tu[vi_tri_ket_thuc] == ' ' || xau_ky_tu[vi_tri_ket_thuc] == '\t') {
        vi_tri_ket_thuc--;
    }

    if (vi_tri_bat_dau <= vi_tri_ket_thuc) {
        for (i = vi_tri_bat_dau; i <= vi_tri_ket_thuc; i++) {
            putchar(xau_ky_tu[i]);
        }
        printf("\n");
    } else {
        printf("Xau da bi xoa het.\n");
    }

    return 0;
}





