#include <stdio.h>

int main() {
    int n, i;
    printf("Nhap so phan tu cua day: ");
    scanf("%d", &n);

    double arr[n];
    printf("Nhap day so thuc: ");
    for (i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }

    double sum = 0.0; 
    int count = 0;

    for (i = 0; i < n; i++) {
        if (arr[i] < 0) {
            sum += arr[i];
            count++;
        }
    }

    if (count > 0) {
        double average = sum / count;
        printf("Trung binh cong cua cac so am la: %.2lf\n", average);
    } else {
        printf("Khong co so am trong day.\n");
    }

    return 0;
}

