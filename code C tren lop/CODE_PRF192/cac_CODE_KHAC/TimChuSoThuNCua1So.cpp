#include <stdio.h>
void printMinMaxDigits (int n){
	int digit;
//	digit=n%10;
//	n=n/10;
	while(n>999) //sua cho nay :))
	{
		digit=n%10;
		n=n/10;
	}
	printf("%d ",digit);}
int main()
{
	int n;
	do
	{
		scanf("%d",&n);
		printMinMaxDigits(n);
	}
	while (n<0);
return 0;
}

