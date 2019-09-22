#include <stdio.h>
 
int main()
{
   int rows, col, i, j, first[10][10], second[10][10], sum[10][10];
 
   printf("Enter the no's of rows and columns of matrix\n");
   scanf("%d %d", &rows, &col);
   printf("Enter the elements of first matrix\n");
 
   for (i = 0; i < rows; i++)
      for (j = 0; j < col; j++)
         scanf("%d", &first[i][j]);
 
   printf("Enter the elements of second matrix\n");
 
   for (i = 0; i < rows; i++)
      for (j = 0 ; j < col; j++)
         scanf("%d", &second[i][j]);
   
   printf("Sum of  matrices:-\n");
   
   for (i = 0; i < rows; i++) {
      for (j = 0 ; j < col; j++) {
         sum[i][j] = first[i][j] + second[i][j];
         printf("%d\t", sum[i][j]);
      }
      printf("\n");
   }
 
   return 0;
}

