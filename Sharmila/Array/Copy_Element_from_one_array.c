#include <stdio.h>
#define MAX_SIZE 100
int main()
{
    int copyarray1[MAX_SIZE], to_array2[MAX_SIZE];
    int i, size;
    printf("Enter the size of the array : ");
    scanf("%d", &size);
    printf("Enter elements of array which has to be make a copy of another elements : ");
    for(i=0; i<size; i++)
    {
        scanf("%d", &copyarray1[i]);
    }
    for(i=0; i<size; i++)
    {
       to_array2[i] = copyarray1[i];
    }
    printf("\nElements of  array2 are : ");
    for(i=0; i<size; i++)
    {
        printf("%d\t",to_array2[i]);
}
    return 0;
}
