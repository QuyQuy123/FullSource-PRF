#include <stdio.h>

int main(){
	int i, n;
	printf("Nhap n:");
	scanf("%d",&n);
	float sum=0.0;
	if(n>0){
	for (i=1; i<=n; i++){
		sum += 1/(float)i;
	    }
	    printf("Tong day so la:%f",sum);
	}
	return 0;
}
