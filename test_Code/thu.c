// tim max trong mang 1 chieu chieu co n phan tu voi n nhap tu ban phim



#include <stdio.h>

void nhapMang(int a[100], int n){
	for(int i=0;i<n;i++){
		printf("\na[%d] =",i);
		scanf("%d",&a[i]);
	}
}
void xuatMang(int a[100], int n){
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
int main(){
	int n ;
	int a[100];
	printf("Nhap n:");
	scanf("%d",&n);
	nhapMang(a,n);
	xuatMang(a,n);
	
	printf("\n-------------------\n");
	int max = a[0];
	for(int i=0;i<n;i++){
		if(a[i] > max && a[i] % 2 != 0){
			max = a[i];
		}
	}
	printf("\nMax :%d",max);
	
	return 0;
}




