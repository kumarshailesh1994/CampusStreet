// 6. Write a program in C to find the maximum and minimum element in an array

#include <stdio.h>
int main()
{
    int arr[10],i,min,max;
    printf("Enter 5 elements in array : \n");
    for(i=0; i<5; i++)
    {
        scanf("%d",&arr[i]);
    }
    min=max=arr[0];
    for(i=1; i<5; i++)
    {
         if(min>arr[i])
		  min=arr[i];
		   if(max<arr[i])
		    max=arr[i];
    }
    printf("minimum of array is : %d",min);
    printf("maximum of array is : %d",max);
    return 0;
}
