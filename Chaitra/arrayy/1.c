/* Program to store elements in array and print it */ 

#include <stdio.h>  
  
int  main()  
{  
    int arr[10]; 
    int i;  
    printf("Enter array elements :\n");  
    for(i=0; i<10; i++)  
    {  
        scanf("%d", &arr[i]);  
    }  
  
    printf("Array Elements are: ");  
    for(i=0; i<10; i++)  
    {  
        printf("%d", arr[i]);
        printf("\n");
    } 
    return 0;
}