#include<stdio.h>
int main()
{
	int n;
	printf("Nhap n:");
	scanf("%d",&n);
	int a[n];
	printf("Nhap cac phan tu:");
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int k;
	printf("Nhap vi tri muon xoa:");
	scanf("%d",&k);
	for (int i=k-1;i<n;i++)
	{
		a[i]=a[i+1];
	}
	for (int i=0;i<n-1;i++)
	{
		printf("%d ",a[i]);
	}
}
