#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main() {
	system("cls");
// INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int n,i;
	do {
		scanf("%d",&n);
	} while(n <0 || n > 10);
	int* a= (int*)malloc(sizeof(int)*n);
	for(i=0; i<n; i++) {
		scanf("\n%d",&a[i]);
	}
	int sum =0;
	for(i=0; i<n; i++) {
		if( a[i] % 2 == 0) {
			sum = sum + pow(a[i],2);
		}
	}


// Fixed Do not edit anything here.
	printf("\nOUTPUT: \n");
// @STUDENT : WRITE YOUR OUTPUT HERE:
	printf("%d",sum);


	printf("\n");
	system("pause");
	return 0;
}
