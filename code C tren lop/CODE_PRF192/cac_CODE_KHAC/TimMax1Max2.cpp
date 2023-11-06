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
	int d[1000];
	for (int i=0;i<n;i++)
	{
		d[a[i]]=0;
	}
	for (int i=0;i<n;i++)
	{
		d[a[i]]+=1;
	}
	int max=-1;
	int k,k1;
	int max1=-1;
	for (int i=0;i<n;i++)
	{
		if ((d[a[i]]>=max))
		{
			max=d[a[i]];
			k=a[i];
		}
	}
	for (int i=0;i<n;i++)
	{
		if (a[i]!=k && d[a[i]]>max1)
		{
			max1=d[a[i]];
			k1=a[i];
		}
	}
	printf("%d %d",k,k1);
return 0;
}
