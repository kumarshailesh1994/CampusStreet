/*4. Write a program in C 
to print all unique elements in an array*/

#include <stdio.h>
int main()
{
    int arr[10], frq[10];
    int i, j, count;
    printf("Enter 10 elements of an array: \n");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
        frq[i] = -1;
    }
    for(i=0; i<10; i++)
    {
        count = 1;
        for(j=i+1; j<10; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                frq[j] = 0;
            }
        }
        if(frq[i] != 0)
        {
            frq[i] = count;
        }
    }
    printf("\nUnique elements in the array are: \n");
    for(i=0; i<10; i++)
    {
        if(frq[i] == 1)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}