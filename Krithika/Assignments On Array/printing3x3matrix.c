8. Write a program in C for a 2D array of size 3x3 and print the matrix

#include <stdio.h>

void main()
{
  int arr1[3][3],i,j;
  
       printf("Input elements in the matrix :\n");
  for(i=0;i<3;i++)
  {
      for(j=0;j<3;j++)
      {
	      printf("[%d],[%d] : ",i,j);
	      scanf("%d",&arr1[i][j]);
      }
  }  
 
 printf("\nThe matrix is : \n");
  for(i=0;i<3;i++)
  {
      printf("\n");
      for(j=0;j<3;j++)
           printf("%d\t",arr1[i][j]);
  }
 printf("\n\n");
}

OUTPUT:
Input elements in the matrix :                                                                                
 [0],[0] : 1                                                                                         
 [0],[1] : 2                                                                                         
 [0],[2] : 3                                                                                         
 [1],[0] : 4                                                                                         
 [1],[1] : 5                                                                                         
 [1],[2] : 6                                                                                         
 [2],[0] : 7                                                                                         
 [2],[1] : 8                                                                                         
 [2],[2] : 9                                                                                         
                                                                                                              
The matrix is :                                                                                               
                                                                                                              
1       2       3                                                                                             
4       5       6                                                                                             
7       8       9 


