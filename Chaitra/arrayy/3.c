/* Program to find duplicate elements inan array */

#include <stdio.h>
int main()
{
    int arr[100] ,i=0, j, n, count = 0;
    printf("Enter size of the array : ");
    scanf("%d", &n);
    printf("Enter elements of an array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
        if(arr[i] == arr[j])
            {
                count++;
                break;
            }
        }
    }
    printf("\nTotal number of duplicate elements found in array = %d", count);

    return 0;
}
