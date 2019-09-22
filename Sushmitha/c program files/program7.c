// 7. Write a program in C to find the second largest element in an array.

#include <stdio.h>
void main()
{
    int arr[10],i,j=0,large1,large2;
    printf("Enter 5 elements in the array :\n");
    for(i=0;i<5;i++)
    {
	   scanf("%d",&arr[i]);
	  }
   large1=0;
   for(i=0;i<5;i++)
   {
      if(large1<arr[i])
	     {
           large1=arr[i];
           j = i;
       }
   }
  large2=0;
  for(i=0;i<5;i++)
  {
     if(i==j)
        {
          i++;
		      i--;
        }
      else
        {
          if(large2<arr[i])
	           {
               large2=arr[i];
             }
        }
  }
  printf("The Second largest element is: %d\n", large2);
}
