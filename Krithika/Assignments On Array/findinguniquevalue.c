4.Write a program in C to print all unique elements in an array.

#include <stdio.h>
void main()
{
    int arr1[100], n,ctr=0;
    int i, j, k; 

       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("%d : ",i);
	      scanf("%d",&arr1[i]);
	    }
    printf("\nThe unique elements found in the array are: \n");
    for(i=0; i<n; i++)
    {
        ctr=0;
        for(j=0; j<i-1; j++)
        {
            if(arr1[i]==arr1[j])
            {
                ctr++;
            }
        }

       for(k=i+1; k<n; k++)
        {
            if(arr1[i]==arr1[k])
            {
                ctr++;
            }
        }

       if(ctr==0)
        {
          printf("%d ",arr1[i]);
        }
    }
       printf("\n\n");
}

output:
Input the number of elements to be stored in the array :5    
Input 3 elements in the array :                                                                               
 0 : 1                                                                                               
 1 : 5                                                                                               
 2 : 1 
 3 : 2
 4 : 1
 5 : 5                                                                                              
                                                                                                              
The unique elements found in the array are :                                                                  
2