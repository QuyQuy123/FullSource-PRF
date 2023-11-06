#include <stdio.h>
#include <math.h>
int main()
{
	int n,s=0,d=0;
	scanf("%d",&n);
	int a[n];
	for (int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for (int i=0;i<n;i++)
	{
        if (a[i] % 2 == 0) 
		{
            int x = sqrt(a[i]);
            if (x * x == a[i]) 
			{
                s += a[i];
                d += 1;
            }
        }
    }
    printf("%d\n",d);
    printf("%X",s);
return 0;
}
