#include <stdio.h>


int main() {
	int a[100];
	int n;
	printf("Nhap vao n:");
	scanf("%d",&n);
	for(int i=0; i<n; i++) {
		scanf("\n%d",&a[i]);
	}
	for(int i=0; i<n-1; i++) {
		for(int j=i+1; j<n; j++) {
			if(a[i] < a[j]) {
				int temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
	for(int i=0; i<n; i++) {
		int check =1;
		for(int j=0;j<i;j++){
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