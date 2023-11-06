#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[100];
    int i;
    printf("Enter a string (max 100 characters): ");
    fgets(s, sizeof(s), stdin);

    for ( i = 0; i < strlen(s); i++) {
      
        if ((i == 0 || s[i - 1] == ' ') && isalpha(s[i])) {
            s[i] = toupper(s[i]);
            i++; 
            if (isalpha(s[i])) {
                s[i] = toupper(s[i]);
            }
        }
    }

    printf("Modified string: %s", s);
    return 0;
}

