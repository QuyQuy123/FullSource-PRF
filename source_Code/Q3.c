#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char a[4][100];
	int i;
	int j;
	for(i=0; i<4; i++) {
		scanf("\n%s",&a[i]);
	}
	for(i=0; i<3; i++) {
		for(j=i+1; j<4; j++) {
			if(strcmp(a[i], a[j]) > 0) {
				char temp[100];
				strcpy(temp, a[i]);
				strcpy(a[i], a[j]);
				strcpy(a[j], temp);
			}
		}
	}
	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=0; i<4; i++) {
		printf("%s ",a[i]);
	}

	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
