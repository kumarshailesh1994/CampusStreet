#include <stdio.h> 
int main()
{
  int Array[50], i, Number;
 
  printf("\n NO. of elements  ");
  scanf("%d", &Number);
 
  printf("\nPlease Enter %d elements\n", Number);
  for (i = 0; i < Number; i++)
   {
     scanf("%d", &Array[i]);
   }     
 
  printf("\n Elements are :\n");
  for (i = 0; i < Number; i++)
  {
 	printf("%d\t", Array[i]);
  }     
  return 0;
}
