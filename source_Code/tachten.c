#include <stdio.h>
#include <string.h>


int main(){
	char mang[100];
	printf("Nhap vao ten cua ban:");
	fgets(mang,sizeof(mang),stdin);
	
	if(mang[strlen(mang)-1] =='\n'){
		mang[strlen(mang)-1] = '\0';
	}
	printf("Ten cua ban:%s",mang);// độ dài tên:
	printf("\n---------------------\n");
	printf("Do dai ten cua ban:%d",strlen(mang));
	printf("\n---------------------\n");
	// tách tên và họ thanh 2 dòng :
	
	int index =0;
	char ho[100];
	char ten[100];
	for(int i=strlen(mang)-1;i>=0;i--){
		if(mang[i] ==' '){
			index =i;
			break;
		}
	}
	for(int i=0;i<index;i++){
		ho[i] = mang[i];
	}
	ho[index]='\0';
	printf("Ho cua ban:%s",ho);
	printf("\n-----------------\n");
	// tach ten:
	
	int ten_Index =0;
	for(int i=index+1;i<strlen(mang);i++){
		ten[ten_Index] = mang[i];
		ten_Index++;
	}
	ten[strlen(mang)]='\0';
	printf("Ten cua ban:%s",ten);
	
	return 0;
	
}

























