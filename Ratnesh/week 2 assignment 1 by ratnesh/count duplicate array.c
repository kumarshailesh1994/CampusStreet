#include <stdio.h>
 
int main()
{
  int arr[10], i, j, Size, Count = 0;
  
  printf("\nPlease enter  Number of elements in an array  :   ");
  scanf("%d", &Size);
  
  printf("\n %dPlease enter elements of an Array  :  ", Size);
  for (i = 0; i < Size; i++)
  {
      scanf("%d", &arr[i]);
    }     
 
  for (i = 0; i < Size; i++)
  {
    for(j = i + 1; j < Size; j++)
    {
        if(arr[i] == arr[j])
        {
          Count++;
        break;
      }
    }
  }

  printf("\n  Duplicate Elements in this Array are  =  %d ", Count);
       
  return 0;
}
