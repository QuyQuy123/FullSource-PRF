#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
int main() {
	system("cls");
// INPUT - @STUDENT: ADD YOUR CODE FOR INPUT HERE:
	int n ;
	scanf("%d",&n);
	int sodu;
	int sum =0;
	while( n !=0){
		sodu = n % 10;
		sum = sum + sodu;
		n = n /10;
	}

// Fixed Do not edit anything here.
	printf("\nOUTPUT: \n");
// @STUDENT : WRITE YOUR OUTPUT HERE:

	printf("%d",sum);

	printf("\n");
	system("pause");
	return 0;
}
