#include <stdio.h>

int main() {
    int chuso;
    printf("Nhap vao mot chu so tu 0 den 9: ");
    scanf("%d", &chuso);

    if (chuso >= 0 && chuso <= 9) {
        char *chu_so_bang_tieng_anh[] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
        printf("Cach doc chu so %d là %s.\n", chuso, chu_so_bang_tieng_anh[chuso]);
    }

    return 0;
}

