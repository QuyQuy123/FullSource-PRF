#include <stdio.h>

int main() {
	int a[100];
	int i ;
	int n =5;
	for(i=0; i<n; i++) {
		scanf("\n%d",&a[i]);
	}
	for(i=0; i<n; i++) {
		if(a[i] % 2 ==0) {
			printf("\n%d",a[i]);
		}
	}
	return 0;
}
