5.Write a program in C to count the frequency of each element of an array

#include <stdio.h>

void main()
{
    int val[10], frequency[10];
    int n, i, j, ctr;
	
       printf("Input the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&val[i]);
		  frequency[i] = -1;
	    }
    for(i=0; i<n; i++)
    {
        ctr = 1;
        for(j=i+1; j<n; j++)
        {
            if(val[i]==val[j])
            {
                ctr++;
                frequency[j] = 0;
            }
        }

        if (frequency[i]!=0)
        {
            frequency[i] = ctr;
        }
    }
    printf("\nThe frequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(frequency[i]!=0)
        {
            printf("%d occurs %d times\n", val[i], frequency[i]);
        }
    }
}

OUTPUT

Input the number of elements to be stored in the array :3                                                     
Input 3 elements in the array :                                                                               
element - 0 : 25                                                                                              
element - 1 : 12                                                                                              
element - 2 : 25                                                                                              
                                                                                                              
The frequency of all elements of array :                                                                      
25 occurs 2 times                                                                                             
12 occurs 1 times                                                                                             
