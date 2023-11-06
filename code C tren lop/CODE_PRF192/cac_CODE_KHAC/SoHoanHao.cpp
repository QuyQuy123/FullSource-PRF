// thuat toan kiem tra so 'n' nhap tu ban phim co phai so hoan hao hay khong?
// perfect number

#include<stdio.h>

// ham kiem tra so hoan hao.
int SoHoanHao(int n)
{
	int s=0;
	for (int i=1;i<n;i++)
	{
		if (n%i==0) s=s+i;
	}
	if (s==n) return 1;
	else return 0;
}

//ham main.
int main()
{
	int n;
	scanf("%d",&n);
	int s=0;
	
	if (SoHoanHao(n)) printf("%d la so hoan hao",n);
	else printf("%d khong la so hoan hao",n);
}

