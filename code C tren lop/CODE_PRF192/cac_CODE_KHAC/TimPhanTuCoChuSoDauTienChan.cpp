//Tinh tong cac gia tri co chu so dau tien la chu so chan co trong mang cac so nguyen
#include<stdio.h>
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
	int n,i,s=0;
	scanf("%d",&n);
	int a[n],b[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++)
	{
		b[i]=daonguoc(a[i])%10;
	}
	
	for (int i=0;i<n;i++)
	{
		if(b[i]%2==0) s=s+a[i];
	}
	printf("%d",s);	
}
