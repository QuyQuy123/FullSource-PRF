#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char password[50];
    int has_upper = 0, has_lower = 0, has_digit = 0, has_special = 0;

    printf("Input: ");
    fgets(password, sizeof(password), stdin);

    
    password[strcspn(password, "\n")] = 0;

    
    if (strlen(password) <= 12) {
        printf("Enter the password(12 character) \n");
        return 1;
    }

    int i;
    for ( i = 0; i < strlen(password); i++) {
        if (isupper(password[i])) {
            has_upper = 1;
        } else if (islower(password[i])) {
            has_lower = 1;
        } else if (isdigit(password[i])) {
            has_digit = 1;
        } else {
            has_special = 1;
        }
    }

    
    if (has_upper && has_lower && has_digit && has_special) {
        printf("good job\n");
    } else {
        printf("retype\n");
    }

    return 0;
}
