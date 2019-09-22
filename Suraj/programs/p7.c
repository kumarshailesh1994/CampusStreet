/*7. Write a program in C to find the 
second largest element in an array.*/

#include <stdio.h>
void main()
{
    int arr[10],i,j=0,lrg,lrg2;
    printf("Enter 5 elements in the array :\n");
    for(i=0;i<5;i++)
    {
	   scanf("%d",&arr[i]);
	  }
   lrg=0;
   for(i=0;i<5;i++)
   {
      if(lrg<arr[i])
	     {
           lrg=arr[i];
           j = i;
       }
   }
  lrg2=0;
  for(i=0;i<5;i++)
  {
     if(i==j)
        {
          i++;
		      i--;
        }
      else
        {
          if(lrg2<arr[i])
	           {
               lrg2=arr[i];
             }
        }
  }
  printf("The Second largest element is: %d\n", lrg2);
}