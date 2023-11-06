#include <stdio.h>

int main() {
    int arr[5];
    printf("Nhap:\n");
    
    // Nhập giá trị cho mảng
    for (int i = 0; i < 5; i++) {
        printf("%d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    
    int max_even = -1; // Khởi tạo max_even với giá trị ban đầu là -1
    
    for (int i = 0; i < 5; i++) {
        // Kiểm tra xem số hiện tại có phải số chẵn và lớn hơn max_even không
        if (arr[i] % 2 == 0 && arr[i] > max_even) {
            max_even = arr[i];
        }
    }
    
    // Kiểm tra xem có số chẵn nào trong mảng không
    if (max_even != -1) {
        printf("even max %d\n", max_even);
    } else {
        printf("No.\n");
    }
    
    return 0;
}
