/*2. Write a program in C to copy the
 elements of one array into another array.*/

#include<stdio.h>
int main() 
{
   int arr1[5], arr2[5], i;
   printf("Enter element of an array : \n");
   for (i = 0; i < 5; i++) 
   {
      scanf("%d",&arr1[i]);
   }
   for (i = 0; i < 5; i++) 
   {
      arr2[i] = arr1[i];
   }
   printf("The copied array is :");
   for (i = 0; i < 5; i++)
      printf("\n%d", arr2[i]);
   return (0);
}

