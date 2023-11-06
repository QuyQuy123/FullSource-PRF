#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main() {
	system("cls");
// INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:

	int n;
	do{
		scanf("%d",&n);	
	}while(n<0);
	int tich = 1;
	int i;
	for(i=2;i<=n/2;i++){
		if( i % 2 ==0){
			tich = tich *i;
		}
		
	}
	
// Fixed Do not edit anything here.
	printf("\nOUTPUT: \n");
// @STUDENT : WRITE YOUR OUTPUT HERE:
	printf("%d",tich);


	printf("\n");
	system("pause");
	return 0;
}
