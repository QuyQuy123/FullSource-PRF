#include<stdio.h>
int main (){
    int i,m,n,k,sum=0,nhan=1;
    scanf("%d",&n);
    m=n;
    if(n / 10==0){
    printf ("no");}else
    while(n / 10 != 0){
    	if (n/10==0) 
       i= n % 10 ;
        sum +=i;
        nhan *=i;
        n /=10;
    
}if (sum==nhan)printf("Yes"); 
  if(sum!=nhan)printf("No");
  return 0;
}
