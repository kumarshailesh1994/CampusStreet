7. write a C program to find the second largest element in an array.

#include <stdio.h>

void main(){
  int arr1[50],n,i,j=0,lrg,secLrg;
       printf("enter the size of array : ");
       scanf("%d", &n);
       printf("input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
       lrg=0;
  for(i=0;i<n;i++)
  {
      if(lrg<arr1[i])
	  {
           lrg=arr1[i];
           j = i;
      }
  }	
   secLrg=0;
  for(i=0;i<n;i++)
  {
     if(i==j)
        {
          i++;  
		  i--;
        }
      else
        {
          if(secLrg<arr1[i])
	     {
               secLrg=arr1[i];
             }
        }
  }

  printf("second largest element in the array is :  %d \n\n", secLrg);
}
