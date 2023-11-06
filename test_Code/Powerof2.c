#include<stdio.h>
#include<math.h>
// 255 = 2 ^ 8 = 2 ^ i
// i = 1 -> 8 : return 1
// 
void checkPowerOf2(int n){
	int check = 1; // 2 ^ 0 
	int i = 0;
	while(check <= n){
		check = pow(2,i);
		if(check == n){
			printf("%d", i);
			break;
			}
		i++;		
		}
	if(check > n) printf("%d is not a power of 2",n);
	}

int main(){
	int n;
	scanf("%d", &n);
	checkPowerOf2(n);
	
	}

