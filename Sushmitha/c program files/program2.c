#include<stdio.h>
int main()
{
 int i, Size, a[10], b[10];

 printf("Enter the Array Size \n");
 scanf("%d", &Size);

 printf("Enter the Array Elements \n");
 for(i = 0; i < Size; i++)
  {
     scanf("%d", &a[i]);

  }

 for(i = 0; i < Size; i++)
  {
    b[i] = a[i];

  }

 printf("\n Elements of Second Array are: \n");
 for(i = 0; i < Size; i++)
  {
    printf("\n Value Inside Array b[%d] = %d", i, b[i]);
  }

return 0;
}
