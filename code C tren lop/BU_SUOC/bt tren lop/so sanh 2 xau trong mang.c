#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];

    printf("Nhap xau s1 va xau s2: ");
    scanf("%s%s", s1, s2);

int compareResult = strcmp(s1, s2);

    if (compareResult > 0) {
        strcpy(s1, s2);
    } else {
        strcat(s1, s2);
    }

    printf("Xau s1 sau khi thay doi: %s\n", s1);
    printf("Xau s2 sau khi thay doi: %s\n", s2);

    return 0;
}

