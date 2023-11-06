#include <stdio.h>

void max1(int n, int a[], int max)
{
	max=a[1];
	for (int i=1;i<=n;i++)
	{
		if (max<a[i])  max=a[i];
	}
	printf("%d",max);
}
void min1(int n, int a[], int min)
{
	min=a[1];
	for (int i=1;i<=n;i++)
	{
		if (min>a[i])  min=a[i];
	}
	printf("%d",min);
}
int main()
{
	int n,max,min;
	scanf("%d",&n);
	int a[n+10];
	for (int i=1;i<n;i++)
	{
		scanf("%d\n",&a[i]);
	}
	max1(n,a,max);
	min1(n,a,min);
	return 0;
}
	

