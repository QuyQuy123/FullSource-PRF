#include<stdio.h>
 
int main() {
   int i, j, matrix1[100][100], matrix2[100][100], matrix3[100][100];
   int row1, col1, row2, col2;
 
   printf("Cong hai ma tran trong C: \n\n");
   printf("Nhap so hang cua matrix1: ");
   scanf("%d", &row1);
   printf("Nhap so cot cua matrix1: ");
   scanf("%d", &col1);
 
   printf("Nhap so hang cua matrix2: ");
   scanf("%d", &row2);
   printf("Nhap so cot cua matrix2: ");
   scanf("%d", &col2);
   if (row1 != row2 || col1 != col2) 
   {
      printf("\nHai ma tran khong cung kich co!");
     return 0;
   }
 
   printf("\nNhap ma tran 1\n");
   for (i = 0; i < row1; i++) {
      for (j = 0; j < col1; j++) {
         printf("Nhap phan tu matrix1[%d][%d]: ", i, j);
         scanf("%d", &matrix1[i][j]);
      }
   }
 
   printf("\nNhap ma tran 2\n");
   for (i = 0; i < row2; i++)
      for (j = 0; j < col2; j++) {
         printf("Nhap phan tu matrix2[%d][%d]: ", i, j);
         scanf("%d", &matrix2[i][j]);
      }
 
   for (i = 0; i < row1; i++)
      for (j = 0; j < col1; j++) {
         matrix3[i][j] = matrix1[i][j] + matrix2[i][j];
      }

   printf("\nKet qua cua phep cong hai ma tran la: \n");
   for (i = 0; i < row1; i++) {
      for (j = 0; j < col1; j++) {
         printf("%d\t", matrix3[i][j]);
      }
      printf("\n");
   }
 
   return 0;
}
