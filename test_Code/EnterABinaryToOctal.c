#include<stdio.h>
#include<math.h>
int binaryToOctal(int decimalNumber);
int binaryToDecimal(int binaryNumber);
int main(){
	long long n; // n <= 16
	
	printf("Enter a binary number: ");
	scanf("%lld", &n);
	
	// convert binary to decimal
	int decimalNumber = binaryToDecimal(n);
	
	// convert decimal to octal
	int octalNumber = binaryToOctal(decimalNumber);
	
	printf("%lld in binary = %d in octal", n, octalNumber);
	return 0;
	
	
	}
int binaryToDecimal(int n){
	int decimalNumber =0, i = 0, remainder;
	while(n!=0){
		remainder = n %10;
		n /= 10;
		decimalNumber += remainder * pow(2,i);
		++i;
	}
	return decimalNumber;
	}
int binaryToOctal(int decimalNumber){
	int octalNumber = 0, i = 0,remainder;
	while(decimalNumber != 0){
		remainder = decimalNumber % 8;
		decimalNumber /= 8;
		octalNumber += remainder * pow(10,i);
		++i;
	}
	return octalNumber;
	}
