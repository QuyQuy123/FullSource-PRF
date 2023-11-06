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
	int k;
	scanf("%d",&k);
	printf("\nOUPUT:\n");
	for (int i=0;i<n;i++)
	{
		for (int j=i+1;j<n;j++)
			{
				if (a[i]-a[j]==k)
				{
					printf("%d\n%d\n",i,j);
					printf("\n");
				}
				if (a[j]-a[i]==k)
				{
					printf("%d\n%d\n",j,i);
					printf("\n");
				}
			}
	}
}
