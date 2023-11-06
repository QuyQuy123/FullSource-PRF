// nhap mang co n phan tu , dem so luong ki tu khac nhau

#include <stdio.h>
#include <math.h>

void nhapMang(int a[100], int n) {
	for(int i=0; i<n; i++) {
		printf("\na[%d] =",i);
		scanf("%d",&a[i]);
	}
}
void xuatMang(int a[100], int n) {
	for(int i=0; i<n; i++) {
		printf("%d ",a[i]);
	}
}
void dem(int a[100], int n) {
    int count =0;
    int bien;
    for(int i=0;i<n;i++){
    	bien =1;
    	for(int j=0;j<i;j++){
    		if(a[i] == a[j]){
    			bien =0;
    			break;
			}
		}
		if(bien){
			count++;
			printf("%d ",a[i]);
		}
	}
	printf("\nCac phan tu khac nhau:%d",count);
}
int main() {
	int a[100];
	int n;
	printf("Nhap vao so luong phan tu cua mang:");
	scanf("%d",&n);
	nhapMang(a,n);
	printf("\nCac gia tri cua mang la:");
	xuatMang(a,n);
	printf("\n------------------------------------\n");
	dem(a,n);
	
	return 0;


}







