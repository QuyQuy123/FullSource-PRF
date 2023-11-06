#include <stdio.h>
#include <conio.h>
 int main() {
	double a,b,x;

	
 	printf("Nhap a,b: ");
 	scanf ("%lf%lf", &a, &b);
 	
 	x = -b/a;
 	
 	if (a==0){
 		if (b==0){
 			printf("Vo So Nghiem");
		 }else{
		 	printf("Vo Nghiem");
		 } 		
	 }
	 else {
	 	printf("%lf", x);
	 }
  
  return 0;

}
