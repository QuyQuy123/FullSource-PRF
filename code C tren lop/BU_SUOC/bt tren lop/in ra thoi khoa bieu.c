#include <stdio.h>

int main() {
    int day;

    printf("Nhap ngay trong tuan: ");
    scanf("%d", &day);

    switch (day) {
        case 2:
            printf("Thoi khoa bieu cua Thu 2:");
            printf("Toan, Van\n"); 
            break;
        case 3:
            printf("Thoi khoa bieu cua Thu 3:");
            printf("Toan, Tin\n"); 
            break;
        case 4:
            printf("Thoi khoa bieu cua Thu 4:");
            printf("Van, Tin\n");
            break;
        case 5:
            printf("Thoi khoa bieu cua Thu 5:");
            printf("Toan, Toan\n");
            break;
        case 6:
            printf("Thoi khoa bieu cua Thu 6:");
            printf("Tin, Tin\n");
            break;
        case 7:
            printf("Thoi khoa bieu cua Thu 7:");
            printf("Duoc nghi\n");
            break;
        case 8:
            printf("Thoi khoa bieu cua Chu Nhat:");
            printf("Duoc nghi\n");
            break;
    
    }

    return 0;
}

