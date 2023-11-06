#include<stdio.h>
void ThemPhanTu(int a[], int &n, int val, int pos)
{
   for(int i = n; i > pos-1; i--){
        a[i] = a[i-1];
    }
    a[pos-1] = val;
    ++n;
    for (int i=0;i<n;i++)
    printf("%d ",a[i]);
}
int main()
{
	int n;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	int val,pos;
	scanf("%d%d",&val,&pos);
	ThemPhanTu(a,n,val,pos);
}
