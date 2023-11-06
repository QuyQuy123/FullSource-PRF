#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	char a[100];
	int n;
	do {
		fgets(a,sizeof(a),stdin);
		if(a[strlen(a)-1]=='\n') {
			a[strlen(a)-1] = '\0';
		}
		n = strlen(a);

	} while(n >=20 || n <= 5 || n % 2 == 0);
	int temp = n /2;
	int i;

	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:
	for(i=temp-2; i<=temp+2; i++) {
		printf("%c",a[i]);

	}

	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
