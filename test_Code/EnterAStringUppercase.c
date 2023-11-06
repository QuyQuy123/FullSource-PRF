#include<stdio.h>

int main(){
	char str[100];
	// ueoai
	scanf("%[^\n]", str);
//	gets(str);
	int i;
	// string length (strlen)
	// and : && , or : ||
	// lower case every character in string 
	for(i = 0; i < strlen(str); i++){
		if(str[i] >= 'A' && str[i] <= 'Z'){
			str[i] += 32;
			}
	}
	// if vowel then upper case 
	for(i = 0; i < strlen(str); i++){
		if(str[i] == 'u' || str[i] == 'e' || str[i] == 'o' ||str[i] == 'a' ||str[i] == 'i' ){
			str[i] -= 32;
			}
	}
	printf("%s", str);
	
	return 0;
	}

