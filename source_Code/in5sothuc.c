#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main() {
	system("cls");
// INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	float a[100];
	int i,j;
	for(i=0;i<5;i++){
		scanf("\n%f",&a[i]);
	}
	for(i=0;i<4;i++){
		for(j=i+1;j<5;j++){
			if(a[i] < a[j]){
				float temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	


// Fixed Do not edit anything here.
	printf("\nOUTPUT: \n");
// @STUDENT : WRITE YOUR OUTPUT HERE:

	for(i=0;i<5;i++){
		printf("%.6f ",a[i]);
	}

	printf("\n");
	system("pause");
	return 0;
}
