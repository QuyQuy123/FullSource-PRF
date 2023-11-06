#include<stdio.h>
int main()
{
	double a,b,lt=1,sum=0;
	scanf("%lf%lf",&a,&b);
	for(int i=1;i<=b;i++)
	{
	lt=lt*a;
	}
	printf("%.6lf",lt);
}
