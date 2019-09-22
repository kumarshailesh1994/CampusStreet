#include <stdio.h>    
int main()
{
    int a[100], n, i;
    int max1, max2;
    printf("Enter size of the array: ");
    scanf("%d", &n);

    printf("elements in the array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }
    max1 = max2 = 0;
    for(i=0; i<n; i++)
    {
        if(a[i] > max1)
        {
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i] > max2 && a[i] < max1)
        {
            max2 = a[i];
        }
    }

    printf("1st largest = %d\n", max1);
    printf("2nd largest = %d", max2);

    return 0;
}
