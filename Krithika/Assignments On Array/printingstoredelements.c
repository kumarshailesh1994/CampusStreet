1.Write a program in C to store elements in an array and print it.
#include <stdio.h>  
  
void  main()  
{  
    int arr[10]; 
    int i; 	 
    for(i=0; i<10; i++)  
    {  
	    printf("%d : ",i);
        scanf("%d", &arr[i]);  
    }  
  
    printf("\nElements in array are: ");  
    for(i=0; i<10; i++)  
    {  
        printf("%d  ", arr[i]);  
    } 
    printf("\n");	
}

OUTPUT:
 0 : 1                                                                                               
 1 : 1                                                                                               
 2 : 2                                                                                               
 3 : 3                                                                                               
 4 : 4                                                                                               
 5 : 5                                                                                               
 6 : 6                                                                                               
 7 : 7                                                                                               
 8 : 8                                                                                               
 9 : 9                                                                                               
                                                                                                              
Elements in array are: 1  1  2  3  4  5  6  7  8  9 