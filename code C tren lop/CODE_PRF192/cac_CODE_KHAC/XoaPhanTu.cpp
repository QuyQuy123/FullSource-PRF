#include<stdio.h>
 void del (int a[],int &n,int pos){
 	for ( int i = pos-1;i<n;i++)
 	a[i]= a[i+1];
 	n--;
 	for (int i=0;i<n;i++)
 	printf("%d ",a[i]);
 }
int main ()
{
	int n,pos;
	scanf("%d%d",&n,&pos);
	int a[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	del(a,n,pos);
return 0;
}
