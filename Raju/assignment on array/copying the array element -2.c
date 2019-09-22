#include <stdio.h>

#include <stdio.h>
void main()
{
    int a1[30], a2[30], i, n;
    
    
    printf("\nEnter no of elements :");
    scanf("%d", &n);
    
    
    printf("\nEnter the values :");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a1[i]);
    }
    
   
    for (i = 0; i < n; i++)
    {
        a2[i] = a1[i];
    }
    
    printf(" First elements of the array \n");
   for (i=0;i<n;i++)
   {
       printf("%d \t",a1[i]);
   }
   
   
    printf("\n The copied array is :");
    for (i = 0; i < n; i++)
    {
       
        printf(" %d \t",a2[i]);
    }
    
    getch();
}