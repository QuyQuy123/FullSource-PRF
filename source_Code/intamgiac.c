#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main() {
	system("cls");
// INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int n;
	do {
		scanf("%d",&n);
	} while(n <0);
	int i , j;


// Fixed Do not edit anything here.
	printf("\nOUTPUT: \n");
// @STUDENT : WRITE YOUR OUTPUT HERE:
	for(i=0; i<n; i++) {
		for(j=0; j<n; j++) {
			if(j >= i) {
				printf("*");
			} else {
				printf(" ");
			}
		}
		printf("\n");
	}



	printf("\n");
	system("pause");
	return 0;
}
