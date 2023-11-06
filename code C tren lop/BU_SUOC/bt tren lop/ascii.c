#include<stdio.h>

int main(){
	int S, i, n;
	
	printf("Nhap n:");
	scanf("%d", &n);

	for (i=1; i<=n; i++) S = S +i;
	
	printf("%d", S);
}
