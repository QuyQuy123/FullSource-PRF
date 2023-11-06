#include<stdio.h>
#include<math.h>
int prime(int n)
{
	if (n<2) return 0;
	for (int i=2;i<=sqrt(n);i++)
	{
		if (n%i==0) return 0;
	}
	return 1;
}
int main()
{
	int n;
	scanf("%d",&n);
	printf("OUTPUT:\n");
	for (int i=1;i<=n;i++)
	if (prime(i)) printf("%d ",i);
}
