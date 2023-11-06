#include<stdio.h>
int main ()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int max1,max2,k1,k2;
	max1=-1;
	max2=-1;
	for (int i=0;i<n;i++)
	{
		if (a[i]>max1)
		{
			max1=a[i];
			k1=i;
		}
	}
	for (int i=0;i<n;i++)
	{
		if (a[i]>max2 && i!=k1)
	{
		max2=a[i];
		i=k2;
	}
	}
	printf("%d",max2);
}

