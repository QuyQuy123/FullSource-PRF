#include <stdio.h>
void deletE(int B[], int size, int where){
	if (where>0 && where<size ){
		for (int i=where;i<size;i++)
            B[i]=B[i+1];
        size--;
        for (int i = 1; i <= size; ++i)
            printf("%d\n", B[i]);
    }
    else
		printf("can not delete");
}

int main(){
	int size;
	int where;
	scanf("%d",&size);
	int B[size+10];
	for (int i=1;i<=size;i++){
		scanf("%d\n",&B[i]);
	}
	scanf("%d",&where);
	deletE(B, size, where);
	return 0;
}
