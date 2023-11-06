// thuat toan kiem tra so 'n' nhap tu ban phim co phai so chinh phuong hay khong?

#include<stdio.h>
#include<math.h>

// ham kiem tra so chinh phuong
int SoChinhPhuong(int n)
{
	int x=sqrt(n);
	if (x*x==n) return 1;
	else return 0;
}

// ham main
int main()
{
	int n,s;
	scanf("%d",&n);
	printf("OUTPUT:\n");
	if (SoChinhPhuong(n)) printf("%d is a perfect square",n);
	else printf("%d is not a perfect square",n);
}
