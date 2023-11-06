#pragma warning (disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main()
{
    char str[4][80], tmp[80];
    int idx = 0, i, j;

    for (i = 0; i < 4; i++)
        scanf("%80[^\n]%*c", str[i]);

    for (i = 0; i < 4; i++)
        for (j = i + 1; j < 4; j++)
            if (strcmp(str[i], str[j]) > 0)
            {
                strcpy(tmp, str[i]);
                strcpy(str[i], str[j]);
                strcpy(str[j], tmp);
            }

    for (i = 0; i < 4; i++)
        printf("%s ", str[i]);

    return 0;
}
