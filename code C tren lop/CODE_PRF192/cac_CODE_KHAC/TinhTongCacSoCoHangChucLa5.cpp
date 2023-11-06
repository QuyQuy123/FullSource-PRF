#include<stdio.h>
int main()
{
	int n,s=0;
	scanf("%d",&n);
	int a[n]; int b[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++)
	{
		b[i]=a[i]/10;
		b[i]=b[i]%10;
	}
	for (int i=0;i<n;i++)
	{

		if (b[i]==5) s=s+a[i];
	}
	
		printf("%d",s);
}
