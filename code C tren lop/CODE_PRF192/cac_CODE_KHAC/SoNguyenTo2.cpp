#include<stdio.h>
#include<math.h>
void prime(int n)
{
	if (n<2) printf("Khong la so nguyen to"); 
	
	for (int i=2;i<=sqrt(n);i++)
	{
		if (n%i==0) printf("Khong la so nguyen to");
		else printf("La so nguyen to");
	}
	

}
int main()
{
	int n;
	scanf("%d",&n);
	prime(n);
}
