#include<stdio.h>

int main(){
	int i, j;
	
	printf("Bang cuu chuong: ");
	
	for(i=1; i<=9; i++){
		for(j=1; j<=10; j++){
			printf("\n%d x %d = %d", i, j, i*j);
		}
	}
}
