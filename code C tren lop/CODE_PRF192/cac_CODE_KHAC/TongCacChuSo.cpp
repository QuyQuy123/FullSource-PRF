#include<stdio.h>
int main()
{
long long n,tong=0,m;
scanf("%llf",&n);
while(n>0)
{
m=n%10;
tong=tong+m;
n=n/10;
}


	if (tong%9==0 ) 
		printf	("9");
	else printf("%llf",tong%9);
}	
																						
