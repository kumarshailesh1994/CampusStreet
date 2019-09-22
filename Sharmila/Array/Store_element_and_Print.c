#include <stdio.h>
int main()
{
  int arr[50], i, number;
  printf("\n Enter no of elements in an array  :  ");
  scanf("%d", &number);
  printf("\n Enter %d elements of an Array \n", number);
  for (i = 0; i < number; i++)
   {
     scanf("%d", &arr[i]);
   }     
  printf("\n Elemenst in this Array are :\n");
  for (i = 0; i < number; i++)
  {
 
}	printf("%d\t", arr[i]);
return 0;
}     