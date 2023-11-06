#include <stdio.h>
//H�m nh?p ma tr�n
void intput(int n, int m, int a[][100]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++) {
            scanf("%d", &a[i][j]);
        }
    }
}
//Ham xuat ma tran
void output(int n, int m, int a[][100]){
    int i,j;
    for(i=0;i<n;i++){
        for(j=0;j<m;j++) {
            printf("%d  ",a[i][j]);
        }
    printf("\n");
    }
}
 
 
//Vi so cot va so hang cua ma tran A, B bang nhau nen ta khong c?n truy?n v�o bi?n n1
int tichMaTran(int a[][100], int b[][100], int m, int n, int m1){
    int c[100][100];
    int i, j, k;
     for(i=0;i<n;i++) 
        for(j=0;j<m1;j++) {
         int tt=0;
           for(k=0;k<m;k++)
               {
                  tt = tt + (a[i][k] * b[k][j]); //C�ng th?c t�nh C[i][j]
                }
            c[i][j] = tt;
    }
     
    printf("\nTICH 2 MA TRAN A B\n");
    output(n,m1,c); //Ma tr?n t�ch c� k�ch thu?c b?ng s? h�ng c?a A v� s? c?t cua B
}
 
int main()
{
    int n, m;
    printf("MA TRAN A:\nNhap so hang, so cot lan luot: ");
    scanf("%d%d", &n, &m);  
    int a[100][100];
    printf("\n------Nhap phan tu ma tran A-----\n");
    intput(n, m, a);
     
    int n1, m1;
    printf("MA TRAN B:\nNhap so hang, so cot lan luot: ");
    scanf("%d%d", &n1, &m1);    
    int b[100][100];
    printf("\n------Nhap phan tu ma tran B-----\n");
    intput(n1, m1, b);
 
     
    printf("\n------MA TRAN A-----\n");
    output(n,m,a);
    printf("\n------MA TRAN B-----\n");
    output(n,m,b);
     
    if(m == n1){
        tichMaTran(a,b,m,n,m1);
    }else{
        printf("So cot Ma tran A khac so hang ma tran B, khong the nhan 2 ma tran nay");
    }
    return 0;
}
