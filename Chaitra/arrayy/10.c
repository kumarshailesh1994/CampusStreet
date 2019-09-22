/* Subtraction of two matrics */

#include <stdio.h>
int main()
{
   int m, n, i, j, mat1[10][10], mat2[10][10], sub[10][10];
 
   printf("Enter number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("Enter elements of first matrix\n");
   for (i=0;i<m;i++)
      for (j=0;j<n;j++)
         scanf("%d", &mat1[i][j]);
 
   printf("Enter elements of second matrix\n");
   for (i=0;i<m;i++)
      for (j=0;j<n;j++)
         scanf("%d", &mat2[i][j]);
   
   printf("Subtraction of 2 matrics\n");
   for (i=0;i<m;i++){
      for (j=0;j<n;j++){
         sub[i][j] = mat1[i][j] - mat2[i][j];
         printf("%d\t", sub[i][j]);
      }
      printf("\n");
   }
 
   return 0;
}