/*
Input
Enter number of rows: 5
Output
    *****
    *****
    *****
    *****
    *****
*/
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n;j++)
		{
			if (j%2==1) printf("0 ");
           else printf("1 ");

		}
		printf("\n");
	}
}