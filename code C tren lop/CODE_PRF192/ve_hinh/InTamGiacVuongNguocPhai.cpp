/*
Input
Enter number of rows: 5
			  *
		     **
		    ***
		   ****
		  *****
Output  
*/


#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main()
{
	int n, i, j;
	scanf("%d", &n);
	for (int i=1;i<=n;i++)
	{
		for (int j=1;j<=n-i;j++)
		{
			printf(" ");
		}
		for (int j=1;j<=i;j++)
		{
		printf("*");
		}
		printf("\n");
	}
}