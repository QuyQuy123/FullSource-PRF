#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>


int main() {
	system("cls");
	//INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:

	int n ;
	int a[100];
	do {
		scanf("%d",&n);
	} while(n>20 || n < 0);
	
	int i , j;
	for(i=0; i<n; i++) {
		scanf("\n%d",&a[i]);
	}
	int index =1;
	for (i = 0; i < n / 2; i++) {
        if (a[i] != a[n - i - 1]) {
            index = 0; // 
            break;
        }
    }

	// Fixed Do not edit anything here.
	printf("\nOUTPUT:\n");
	//@STUDENT: WRITE YOUR OUTPUT HERE:

	if(index ==1) {
		printf("1");
	} else {
		printf("0");
	}
	//--FIXED PART - DO NOT EDIT ANY THINGS HERE
	printf("\n");
	system ("pause");
	return(0);
}
