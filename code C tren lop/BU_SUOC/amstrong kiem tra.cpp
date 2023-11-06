#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <ctype.h>


int main() {
  system("cls");
  //INPUT - @STUDENT:ADD YOUR CODE FOR INPUT HERE:
	int i, m, n, k, count=1, Sum=0;
	scanf("%d", &n);	

  // Fixed Do not edit anything here.
  printf("\nOUTPUT:\n");
  //@STUDENT: WRITE YOUR OUTPUT HERE:
  	m=n;
  	k=n;
  	if(n<10)
  		count=1;
  	else{
  		while(n/10 != 0){
			count++;
			n/=10; 
		}	
	}
	
	if(count>0){
		int *a=(int *)calloc(count, sizeof(int));
		i=0;
		while(m/10 != 0){
			a[i]=m%10;
			m/=10;
			i++;
		}
		a[count-1]=m;
		for(i=0; i<count; i++)	
			Sum+=a[i]*a[i]*a[i];
	free(a);
	}
	if(Sum==k)
		printf("\n%d is amstrong number", k);
	else
		printf("\n%d is not an amstrong number", k);
  
  //--FIXED PART - DO NOT EDIT ANY THINGS HERE
  printf("\n");
  system ("pause");
  return(0);
}
