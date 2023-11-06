#include<stdio.h>
#include<math.h>

int main(){
	double a, b, c;
	double S;
	printf("Nhap 3 so a, b, c: ");
	scanf("%lf%lf%lf", &a, &b, &c);
	
	if (a + b > c && a + c> b && c + b >a ){
		printf ("Day La Mot Tam Giac\n");
	if (a == b && b == c){
		printf("Tam Giac Deu\n");
	}else if (a == b || a == c || b == c ){
		printf("Tam Giac Can\n");
	}else if (a*a == b*b + c*c|| b*b == a*a + c*c|| c*c == a*a + b*b){
		printf("Tam Giac Vuong\n");
	}else if (a*a == b*b + c*c|| b*b == a*a + c*c|| c*c == a*a + b*b){
	if (a == b || a== c || b == c ){
		printf("Tam Giac Vuong Can\n");
	}
	}

}
	S= a*b*c;
	printf("Dien tich tam giac la: %.lf", S);
}
