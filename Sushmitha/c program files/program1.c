//1. write a program in C to store elements in an array and print it.

#include <stdio.h>
int main()
{
  int Array[50], i, Number;

  printf("Enter Number of elements in an array  :  ");
  scanf("%d", &Number);

  printf("Enter %d elements of an Array \n", Number);
  for (i = 0; i < Number; i++)
   {
     scanf("%d", &Array[i]);
   }

  printf("Elements in this Array are :\n");
  for (i = 0; i < Number; i++)
  {
 	printf("%d\t", Array[i]);
  }

  return 0;
}
