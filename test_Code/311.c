#include <stdio.h>
#include <math.h>
int checksnt(int n){
	int index =1;
	if(n == 1){
		index =0;
	}
	int i;
	for(i=2;i<=sqrt(n);i++){
		if(n % i ==0){
			index =0;
		}
	}
	return index;
}

int main(){
	int n;
	do{
		printf("Nhap n:");
		scanf("%d",&n);
	}while(n <=0);
	int i , j;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i+j <n){
				printf("1 ");
			}
		}
		printf("\n");
	}
	
	
	
	return 0;
}
