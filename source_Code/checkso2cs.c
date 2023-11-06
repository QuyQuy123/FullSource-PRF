#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main() {
	system("cls");
// INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:

	int a[100];
	int i;
	for(i=0; i<7; i++) {
		scanf("\n%d",&a[i]);
	}
	int index=0,j;


// Fixed Do not edit anything here.
	printf("\nOUTPUT: \n");
// @STUDENT : WRITE YOUR OUTPUT HERE:

	for(i=0; i<7; i++) {
		if(a[i] >9 && a[i] <100) {
			index =1;
			int var_index =0;
			for(j=0; j<i; j++) {
				if(a[i] == a[j]) {
					var_index=1;
					break;

				}
			}
			if(var_index != 1){
				printf("%d ",a[i]);
			}
		}
	}
	if(index ==0) {
		printf("No two-digit number ");
	}
	printf("\n");
	system("pause");
	return 0;
}

