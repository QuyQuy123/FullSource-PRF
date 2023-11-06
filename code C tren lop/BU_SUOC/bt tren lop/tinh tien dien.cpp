#include<stdio.h>
#include<math.h>

int main(){
	float s, m1, m2;
	float soDienTieuThu;
	
	printf("Nhap so dien tieu thu: ");
	scanf("%f",&s);
	printf("Nhap so tien 100 so dau: ");
	scanf("%f", &m1);
	printf("Nhap so tien cho cac so tiep theo:");
	scanf("%f", &m2);
	
	if (s<100){
	soDienTieuThu = s*m1;
	}else 
	soDienTieuThu = s*m1 + (s-100)*m2;
	
	printf("So tien dien phai tra:%.2f", soDienTieuThu);
	
}
