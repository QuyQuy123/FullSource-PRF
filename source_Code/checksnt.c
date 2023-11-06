#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main() {
	// chú ý : dây là bài viet nguoc.
	system("cls");
// INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int n;
	scanf("%d",&n);
	int index = 1;
	if(n ==0 || n ==1){
		index =0;
	}
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n % i == 0){
			index = 0;
		}
	}

// Fixed Do not edit anything here.
	printf("\nOUTPUT: \n");
// @STUDENT : WRITE YOUR OUTPUT HERE:
	if(index ==1){
		printf("Not Frime");
	}else{
		printf("Frime");
	}

	printf("\n");
	system("pause");
	return 0;
}
