
#include <stdio.h>
#include<stdio.h>>
#define MAX_SIZE 100

int main()
{
    int a[MAX_SIZE];
    int i, j, size, count = 0;

    
    printf("Enter size of the array : ");
    scanf("%d", &size);

   
    printf("Enter elements in array : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &a[i]);
    }

    
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
           
            if(a[i] == a[j])
            {
                count++;
                break;
            }
        }
    }

    printf("\nTotal number of duplicate elements found in array = %d", count);

    return 0;
}