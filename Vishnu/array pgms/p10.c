/*10. Write a program in C for 
subtraction of two Matrices. */

#include <stdio.h>
int main()
{
   int row, column, i, j, first[10][10], second[10][10], subtract[10][10];
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
    printf("\nSubtraction of two matrices is:\n");
    for (i = 0; i < row; i++) {
      for (j = 0 ; j < column; j++) {
         subtract[i][j] = first[i][j] - second[i][j];
         printf("%d\t", subtract[i][j]);
      }
      printf("\n");
   }
   return 0;
}

