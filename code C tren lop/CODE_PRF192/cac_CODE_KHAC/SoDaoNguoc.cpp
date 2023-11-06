#include <stdio.h>
int daonguoc(int n)
{
	int m=0;
	while(n>0)
	{
		m=m*10+n%10;
		n=n/10;
	}
	return m;
}
int main()
{
	int n,s=0,d=0;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("OUTPUT:\n");
	for (int i=0;i<n;i++)
	{
		if (daonguoc(a[i])==a[i]) printf("%d ",a[i]);
	}
return 0;
}
