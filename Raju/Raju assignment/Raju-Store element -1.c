#include<stdio.h>
int main()
{
  int a[50], i, n;
 
  printf("\n Enter Number of elements in an array  :  ");
  scanf("%d", &n);
 
  printf("\n Enter %d elements of an Array \n", n);
  for (i = 0; i < n; i++)
   {
     scanf("%d", &a[i]);
   }     
 
  printf("\n Elemenst in this Array are :\n");
  for (i = 0; i < n; i++)
  {
 	printf("%d\t", a[i]);
  }     
 
  return 0;
}