#include <stdio.h>
#include <string.h>



int main() {
	char a[100];
	fgets(a,sizeof(a),stdin);
//	if(a[strlen(a)-1]== '\n'){
//		a[strlen(a)-1] = '\0';
//	}
	int i;
	int count =0;
	int check =0 ;
	for(i=0; i<strlen(a)-1; i++) {
		if(a[i] != ' ') {
			count = count +1;
		}
		if(a[i] == ' ') {
			check++;
		}
		if(check == 3) {
			break;
		}

	}
	printf("\nOUTPUT:\n");
	printf("Dem words:%d",count);
	return 0;

}