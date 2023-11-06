#include <stdio.h>
int main()
{
    int x,n; 
    int sum = 0;
    int lt = 1;
    scanf("%d", &x);
    scanf("%d", &n);
    for(int i = 1; i <= n; i++)
	{
		if (i%2!=0)
		{
        	lt *= x;  
       		 sum += lt;
       	}
       	if (i%2==0)
		{
        	lt *= x;  
       		sum -= lt;
       	}
    }
    printf("S(%d,%d) = %d",x, n,sum);
}
