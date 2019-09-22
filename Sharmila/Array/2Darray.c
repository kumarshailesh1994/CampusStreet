#include <stdio.h>

void main()
{
  int ar[13][13],i,j;
  
 

       printf(" elements of 2D  3X3 matrix :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
         
          scanf("%d",&ar[i][j]);
      }
  }  
 
 printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",ar[i][j]);
  }
 printf("\n\n");
}