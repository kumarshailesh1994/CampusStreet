/*2D array of size 3x3 and print the matrix */

#include <stdio.h>
void main()
{
  int mat[3][3],i,j;
  printf("Enter elements to the matix:\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("element  [%d],[%d] :\n ",i,j);
	      scanf("%d",&mat[i][j]);
      }
  }  
 
 printf("The matrix is : \n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",mat[i][j]);
  }
 printf("\n\n");
}