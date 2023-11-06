// dao nguoc ten cua ban:

#include <stdio.h>
#include <string.h>

int main(){
	char mang[100];
	printf("Nhap vao ten cua ban:");
	fgets(mang, sizeof(mang),stdin);
	
	if(mang[strlen(mang)-1]=='\n'){
		mang[strlen(mang)-1] = '\0';
	}
	printf("Ten cua ban:%s",mang);
	
	printf("\n---------------------\n");
	char temp[100];
	int index=0;
	printf("Dao nguoc:");
	for(int i =strlen(mang)-1;i>=0;i--){
		temp[index++] = mang[i];
	}
	printf("%s",temp);
	return 0;
}









