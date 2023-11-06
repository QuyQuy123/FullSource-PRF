#include <stdio.h>
#include <stdio.h>
#include<math.h>
int digit (int n)
{
	if (n<0) n=abs(n);
	int digit;
	while(n>0)
	{
		digit=n%10;
		
		n=n/10;
	}
	return digit;
}

int tong(int n)
{
	if (n<0) n=abs(n);
	int m=0,s=0;
	while(n>0)
	{
		m=n%10;
		s=s+m;
		n=n/10;
		
	}	
	return s;
}
int main()
{
	int n,s=0,d=0;
	scanf("%d",&n);
	if (n>=0)
	{
		printf("%d ",tong(n));
	}
	else if(n<0)
	{
		s=s-2*digit(n)+tong(n);
		printf("%d",s);
	}	
return 0;
}
