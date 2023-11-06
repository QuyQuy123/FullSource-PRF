#include<stdio.h>
#include<stdio.h>

int main (){
	int x, y;
	
	printf("Nhap diem M co toa do x va y:\n ");
	scanf("%d%d", &x, &y);
	
	if(x<0 && y>0){
		printf("Diem M nam o goc phan tu thu 1");
		}else if(x>0 && y>0){
			printf("Diem M nam o goc phan tu thu 2");
		}else if (x>0 && y<0){
			printf("Diem M nam o goc phan tu thu 3");
		}else
		printf("Diem M nam o goc phan tu thu 4");
	
	
	return 0;
}
