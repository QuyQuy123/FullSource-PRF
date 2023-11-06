// thuat toan kiem tra so 'n' nhap tu ban phim co phai so dao nguoc hay khong?
#include <stdio.h>

// ham kiem tra so dao nguoc
int daonguoc(int n)
{
	int k=n;
	int m=0;
	while(n>0)
	{
		m=m*10+n%10;
		n=n/10;
	}
	if (k==m) return 1;
	else return 0;
}

// ham main
int main()
{
	int n,s=0,d=0;
	scanf("%d",&n);
	printf("OUTPUT:\n");
	if (daonguoc(n)) printf("%d la so dao nguoc",n);
	else printf("%d khong phai la so dao nguoc",n);
return 0;
}
