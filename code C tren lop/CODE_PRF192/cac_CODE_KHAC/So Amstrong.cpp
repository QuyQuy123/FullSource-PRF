// thuat toan kiem tra so 'n' nhap tu ban phim co phai so Amstrong hay khong?

#include<stdio.h>
#include<math.h>

// ham kiem tra so Amstrong
int Amstrong(int n)
{
	int m=0,remainder=0,result=0,power;
	int original=n;
	while (original !=0)
	{
		original=original/10;
		m++;
	}
	
	original=n;
	while (original !=0)
	{
		remainder=original%10;
		power=pow(remainder,m);
		result+=power;
		original=original/10;
	}
	if (result ==n) return 1;
	else return 0;
}

// ham main
int main()
{
	int n;
	scanf("%d",&n);
	printf("OUTPUT:\n");
	if (Amstrong(n)) printf("%d la so amstrong",n);
	else printf("%d khong la so amstrong",n);
}


