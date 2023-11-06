#include <stdio.h>
#include <string.h>

int main() {
	char names[5][50];
	char initial;
	printf("Nhap ten cua 5 hoc sinh:\n");
	for (int i = 0; i < 5; i++) {
		printf("Nhap ten hoc sinh thu %d: ", i + 1);
		scanf("%s", names[i]);
	}
	printf("Nhap ky tu bat dau ten: ");
	scanf(" %c", &initial);
	printf("Cac hoc sinh co ten bat dau bang '%c':\n", initial);
	for (int i = 0; i < 5; i++) {
		if (names[i][0] == initial) {
			printf("%s\n", names[i]);
		}
	}

	return 0;
}
