10. write a C program for subtraction of two matrices

#include <stdio.h>

void main()
{
  int arr1[50][50],brr1[50][50],crr1[50][50],i,j,n;
  
    
        printf("enter the size of the matrix: ");
       scanf("%d", &n); 
       printf("enter elements in the first matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&arr1[i][j]);
            }
        }   
       printf("enter elements in the second matrix :\n");
       for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
	           printf("element - [%d],[%d] : ",i,j);
	           scanf("%d",&brr1[i][j]);
            }
        }    
   printf("the first matrix is :\n");
  for(i=0;i<n;i++)
    {
      printf("\n");
      for(j=0;j<n;j++)
           printf("%d\t",arr1[i][j]);
    }
  
  printf("\nthe second matrix is :\n");
  for(i=0;i<n;i++)
    {
      printf("\n");
      for(j=0;j<n;j++)
      printf("%d\t",brr1[i][j]);
    }
 
   for(i=0;i<n;i++)
       for(j=0;j<n;j++)
            crr1[i][j]=arr1[i][j]-brr1[i][j];
   printf("subtraction of 2 matrix is  : \n");
   for(i=0;i<n;i++){
       printf("\n");
       for(j=0;j<n;j++)
            printf("%d\t",crr1[i][j]);
   }
   printf("\n");
}