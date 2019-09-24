/*9.  Write a program in C for addition 
of two Matrices of same size*/
#include <stdio.h>
int main()
{
   int row, column, i, j, first[10][10], second[10][10], sum[10][10];
   printf("Enter the number of rows and columns of matrix\n");
   scanf("%d%d", &row, &column);
   printf("Enter the elements of first matrix\n");
   for (i=0;i<row;i++)
   {
      for (j=0; j<column;j++)
      {
         scanf("%d", &first[i][j]);
      }
   }
   printf("Enter the elements of second matrix\n");
   for (i=0;i<row;i++)
   {
      for (j=0;j<column;j++)
      {
         scanf("%d", &second[i][j]);
      }
   }
    printf("\nFirst matrix :\n");
    for(i=0;i<row;i++)
    {
      printf("\n");
      for(j=0;j<column;j++)
           printf("%d\t",first[i][j]);
    }
  
    printf("\nSecond matrix :\n");
    for(i=0;i<row;i++)
    {
      printf("\n");
      for(j=0;j<column;j++)
      printf("%d\t",second[i][j]);
    }
    printf("\nSum of two matrices is:\n");
    for (i = 0; i < row; i++) {
      for (j = 0 ; j < column; j++) {
         sum[i][j] = first[i][j] + second[i][j];
         printf("%d\t", sum[i][j]);
      }
      printf("\n");
   }
   return 0;
}

