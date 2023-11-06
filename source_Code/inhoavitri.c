#include <stdio.h>
#include <string.h>
#include <ctype.h>


int main(){
	char a[100];
	fgets(a, sizeof(a),stdin);
	if(a[strlen(a)-1]=='\n'){
		a[strlen(a)-1]='\0';
	}
	int i;
	for(i=0;i<strlen(a);i++){
		if( i % 2 != 0){
			a[i] = toupper(a[i]);
		}
	}
	printf("%s",a);
	return 0;
}
