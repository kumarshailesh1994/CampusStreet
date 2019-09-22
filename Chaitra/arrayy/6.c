/*program  to find the maximum and minimum element in an array */

#include <stdio.h>
int main()
{
    int i, max, min, n,arr[100];
    printf("Enter array size\n ");
    scanf("%d", &n);
    printf("Enter array elements:\n ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    max = arr[0];
    min = arr[0];
    for(i=1; i<n; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }

        if(arr[i] < min)
        {
            min = arr[i];
        }
    }
    printf("Maximum element = %d\n", max);
    printf("Minimum element = %d", min);

    return 0;
}