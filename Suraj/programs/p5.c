/*5. Write a program in C to count the 
frequency of each element of an array*/

#include <stdio.h>
void main()
{
    int arr[5], frq[5];
    int i, j, count;
    printf("Enter 5 elements of an array :\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
        frq[i] = -1;
    }
    for(i=0; i<5; i++)
    {
        count = 1;
        for(j=i+1; j<5; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                frq[j] = 0;
            }
        }
        if(frq[i]!=0)
        {
            frq[i] = count;
        }
    }
    printf("\nThe frequency of all elements of array : \n");
    for(i=0; i<5; i++)
    {
        if(frq[i]!=0)
        {
            printf("%d occurs %d times\n", arr[i], frq[i]);
        }
    }
}
