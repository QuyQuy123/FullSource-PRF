#include <stdio.h>
#include <string.h>
#include <unistd.h>

int main() {
    char text[] = "Hello, World!";
    int screenWidth = 80; // Chieu rong cua man hinh

    int textLength = strlen(text);
    int x = 0;
    int i;

    while (1) {
        // Xaa man hinh
        printf("\033[H\033[J");

        // In dong chu toi v?itri x, 0
        for (i = 0; i < x; i++) {
            putchar(' ');
        }
        printf("%s", text);

        fflush(stdout); // Ðay du lieu den man hinh

        // Di chuyen vi tri caa dong chu tu trai sang phai
        x++;

        // Neu vi tri vuot qua chieu rong cua man hinh, dat lai vi tri x=0
        if (x > screenWidth) {
            x = 0;
        }

        usleep(100000); // Tam dung trong 100ms
    }

    return 0;
}

