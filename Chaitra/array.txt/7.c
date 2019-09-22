/* the second largest element in an array.*/

#include <stdio.h> 
#include <limits.h>  
void seclargest(int arr[], int arr_size) 
{ 
    int i, first, second; 
    if (arr_size < 2) 
    { 
        printf(" Invalid Input "); 
        return; 
    } 
  
    first = second = INT_MIN; 
    for (i = 0; i < arr_size ; i ++) 
    { 
        if (arr[i] > first) 
        { 
            second = first; 
            first = arr[i]; 
        } 
        else if (arr[i] > second && arr[i] != first) 
            second = arr[i]; 
    } 
    if (second == INT_MIN) 
        printf("There is no second largest element\n"); 
    else
        printf("The second largest element is %d", second); 
} 
  
int main() 
{ 
    int n,arr[50],i;
    printf("Enter number of element to be stored in an array:\n");
    scanf("%d",&n);
    printf("Enter %d array elements\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    senlargest(arr, n); 
    return 0; 
} 