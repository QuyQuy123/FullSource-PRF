#include <stdio.h>

int main() {

	int a[100];
	int n=5;
	int i;
	for(i=0; i<n; i++) {
		scanf("\n%d",&a[i]);
	}
	int j;
	for(i=0; i<n-1; i++) {
		for(j=i+1; j<n; j++) {
			if(a[i] > a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	printf("\nOUTPUT:\n");
	for(i=0; i<n; i++) {
		if(a[i] % 2 ==0){
			printf("\n%d",a[i]);
		}
	}
	printf("\n----------------\n");
	for(i=0; i<n; i++) {
		if(a[i] % 2 !=0){
			printf("\n%d",a[i]);
		}
	}


	return 0;
}





