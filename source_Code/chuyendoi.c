#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main() {
	system("cls");
// INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	char a;
	scanf("%s",&a);
	int mang[100];
	int i=0,j;
	int sodu;
	int value =(int)a;
	while( value !=0) {
		sodu = value % 8 ;
		mang[i++] = sodu;
		value= value/8;
	}



// Fixed Do not edit anything here.
	printf("\nOUTPUT: \n");
// @STUDENT : WRITE YOUR OUTPUT HERE:
	printf("%d ",a);
	for(j=i; j>=0; j--) {
		printf("%d",mang[j]);
	}




	printf("\n");
	system("pause");
	return 0;
}
