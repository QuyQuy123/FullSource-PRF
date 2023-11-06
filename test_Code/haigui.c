
/* // CAU 4
#include <stdio.h>

int main() {

	int n ;
	printf("Nhap vao n:");
	scanf("%d",&n);
	int i ,j;
	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			if (j > i) {
				printf(" ");
			} else {
				if ((i + j) % 2 == 0) {
					printf("1");
				} else {
					printf("0");
				}
			}
		}
		printf("\n");
	}

	return 0;
}

// CAU 6:
#include <stdio.h>


int main() {
	int a[100];
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	
	for(int i=0; i<n; i++) {
		scanf("\n%d",&a[i]);
	}
	int i,j;
	printf("\nOUTPUT:\n");
	for(i=0; i<n; i++) {
		int check =1;
		for(j=0;j<i;j++){
			if(a[i] == a[j]){
				check =0;
				break;
			}
		}
		if(check){
			printf("%d ",a[i]);
		}
	}

	return 0;
}
// CAU 9:

#include <stdio.h>

int main(){
	int a[100];
	int n;
	printf("Nhap vao n:");
	scanf("%d",&n);
	int i,j;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(a[i] > a[j]){
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(i=0;i<n;i++){
		if(a[i] % 2 != 0){
			printf("%d ",a[i]);
		}
	}
	for(i=0;i<n;i++){
		if(a[i] % 2 ==0){
			printf("%d ",a[i]);
		}
	}
	
	
	return 0;
}

*/

// CAU 3 

#include <stdio.h>
#include <stdio.h>

int main(){
	int n;
	int*a  = (int*)malloc(sizeof(int)*n);
	printf("Nhap vao n:");
	scanf("%d",&n);
	int i;
	int sum =0;
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		if(a[i] % 2 !=0){
			sum = sum + pow(a[i],2);
		}
	}
	printf("\nSum:%d",sum);
	return 0;
}







