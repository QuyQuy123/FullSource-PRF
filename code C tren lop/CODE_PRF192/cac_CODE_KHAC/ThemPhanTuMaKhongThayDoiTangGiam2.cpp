#include<stdio.h>
int main()
{
	int n,i,s=-1,d=0,min;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int x;
	scanf("%d",&x);
	min=a[0];
		for (int i=0;i<n;i++)
	{
		if (a[i]<min && a[i]>x) 
		{
			min=a[i];
			s=i;
		}
	}
		for (int i=n-1;i>=s+1;i--)
	{
		
		a[i+1]=a[i];
	}
	a[s+1]=x;
	for (int i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
}
	
