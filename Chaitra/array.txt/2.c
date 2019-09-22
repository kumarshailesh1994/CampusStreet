/* program in C to copy the elements of one array into another array */

#include <stdio.h>
int main()
{
    int arr[100], num[100] ,i, n;
    printf("Enter number of element to be stored in an array:\n");
    scanf("%d",&n);
    printf("Enter %d array elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
	}
    for(i=0; i<n; i++)
    {
        num[i] = arr[i];
    }
    printf("First Array Elements is:\n ");  
    for(i=0; i<n; i++)  
    {  
        printf("%d", arr[i]);
        printf("\t");
    } 
    printf("\n");
    printf("Second Array Elements is:\n ");  
    for(i=0; i<n; i++)  
    {  
        printf("%d", num[i]);
        printf("\t");
    } 
    return 0;
}