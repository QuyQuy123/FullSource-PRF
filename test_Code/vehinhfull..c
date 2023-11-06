/*
// CAU 1:in ra hinh binh hanh:

Input
Enter number of rows: 5
Output
    *****
   *****
  *****
 *****
*****

#include <stdio.h>
int main(){
	int i, j, rows;
	scanf("%d", &rows);
	for(i = 1; i <= rows; i++){
		for(j = 1; j <= rows-i; j++)
        {
			printf(" ");
		}
		for(j = 1; j <= rows; j++)
        {
			printf("*");
		}
		printf("\n");
	}
	return 0;
}



//in ra hinh vuong
#include<stdio.h>
int main() {
	int n;
	scanf("%d",&n);
	for (int i=1; i<=n; i++) {
		for (int j=1; j<=n; j++) {
			printf("* ");
		}
		printf("\n");
	}
}



// in ra hình chu nhat

#include <stdio.h>

int main(){
	int n,m;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}

*/


#include<stdio.h>
int main() {
	int i, j, rows;
	printf("Enter the number of rows: ");
	scanf("%d", &rows);
	for (i = 1; i <= rows; ++i) {
		for (j = 1; j <= i; ++j) {
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}









