// kiem tra chuoi doi xung ;
/*
#include <stdio.h>
#include <string.h>


int main() {
	char a[100];// vanqnav
	int n;
	do {
		fgets(a, sizeof(a),stdin);
		if(a[strlen(a)-1] == '\n') {
			a[strlen(a)-1]= '\0';
		}
		n = strlen(a);
	} while(n % 2 ==0);

	int vi_trigiua = n /2;
	int i;
	int index =1;
	for(i=0;i<vi_trigiua;i++){
		if(a[i] != a[n-i-1]){
			index =0;
		}
	}
	if(index){
		printf("\nDay la chuoi doi xung");
	}else{
		printf("\nDay khong phai chuoi doi xung");
	}
	return 0;

}
// dao nguoc chuoi
#include <stdio.h>
#include <string.h>

int main(){
	char a[100];
	fgets(a,sizeof(a),stdin);
	if(a[strlen(a)-1]=='\n'){
		a[strlen(a)-1]='\0';
	}
	char b[100];
	int i;
	int j=0;
	for(i=strlen(a)-1;i>=0;i--){
		b[j++] = a[i];
	}
	printf("%s",b);
	return 0;
}



// tach ho va ten;

#include <stdio.h>
#include <string.h>

int main(){
	char a[100];
	printf("Nhap vao ho va ten:");
	fgets(a,sizeof(a),stdin);
	if(a[strlen(a)-1]=='\n'){
		a[strlen(a)-1]='\0';
	}
	int i ;
	int index ;
	char ho[50];
	char ten[50];
	for(i=strlen(a)-1;i>=0;i--){
		if(a[i] == ' '){
			index = i;
			break;
		}
	}
	int j=0;
	for(i=index+1;i<=strlen(a);i++){
		ten[j++] = a[i];
	}
	ten[strlen(ten)]='\0';
	printf("Ten:%s",ten);
	for(i=0;i<index;i++){
		ho[i] = a[i];
	}
	ho[index] = '\0';
	printf("\nHo:%s",ho);
	return 0;
}





// nhap vao ten 5 nguoi roi sap theo theo bang chu cai

#include <stdio.h>
#include <string.h>

int main() {

	char a[5][100];
	printf("Nhap vao ten 5 nguoi:");
	int i;
	for(i=0; i<5; i++) {
		scanf("\n%s",&a[i]);
	}
	int j;
	for(i=0; i<4; i++) {
		for(j=i+1; j<5; j++) {
			if(strcmp(a[i],a[j]) >0 ) {
				char temp[100];
				strcpy(temp,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],temp);
			}
		}
	}
	printf("\n-------------------\n");
	for(i=0; i<5; i++) {
		printf("%s ",a[i]);
	}
	return 0;
}

*/
























