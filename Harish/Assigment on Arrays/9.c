9. write a program in C for addition of two matrices of same size.

#include <stdio.h>

void main()
{
  int arr1[50][50],brr1[50][50],crr1[50][50],i,j,n;

        printf("enter the size of the square matrix ");
       scanf("%d", &n); 
       printf("Input elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }   
  
       printf("enter the element in second matrix:\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&brr1[i][j]);
            }
        }    
   printf("the first matrix is  :\n");
  for(i=0;i<n;i++)
    {
      printf("\n");
      for(j=0;j<n;j++)
           printf("%d\t",arr1[i][j]);
    }

  printf("the second matrix is  :\n");
  for(i=0;i<n;i++)
    {
      printf("\n");
      for(j=0;j<n;j++)
      printf("%d\t",brr1[i][j]);
    }
   
   for(i=0;i<n;i++)
       for(j=0;j<n;j++)
            crr1[i][j]=arr1[i][j]+brr1[i][j];
   printf("addition of 2 matrix is  : \n");
   for(i=0;i<n;i++){
       printf("\n");
       for(j=0;j<n;j++)
            printf("%d\t",crr1[i][j]);
   }
   printf("\n");
}