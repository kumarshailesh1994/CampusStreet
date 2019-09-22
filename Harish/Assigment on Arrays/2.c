2. Write a program to copy elements of one array into another 

#include <stdio.h>
void main(){	
    	  
		   int ar1[40], ar2[40];
  
  	  	   int i, n;
	
 		   for(i=0;i<n;i++)
      	    {
   			printf("%d",&arr1[i]);
   		    }    
 		   for(i=0; i<n; i++)
	    	     {
                        ar2[i] = ar1[i];
   		         }
                        printf("elements of first array  is \n");
                   for(i=0; i<n; i++)
                     {
                        printf("%d", ar1[i]);
                     }
                        printf("\nthe elements copied into second array is :\n");
   
                   for(i=0; i<n; i++)
                     {
                        printf("% 5d", ar2[i]);
      
                     }
	         }