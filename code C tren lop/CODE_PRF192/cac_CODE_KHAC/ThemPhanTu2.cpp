//them phan tu co gia tri x vao vi tri k
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int x,k;
	scanf("%d %d",&x,&k);
	for (int i=n;i>=k-1;i--)
	{
		a[i]=a[i-1];
	}
	a[k-1]=x;
	for (int i=0;i<=n;i++)
	{
		printf("%d ",a[i]);
	}
}
