
    2.copying elements of one array to another array


		#include<stdio.h>


		void main()
	
		{
    	  
		   int arr1[100], arr2[100];
  
  	  	   int i, n;
	
 		   for(i=0;i<n;i++)
     
      		     {
	     
	   
   			printf("%d",&arr1[i]);
	
   		     }
    
       
 		   for(i=0; i<n; i++)
    
	    	     {
            
                        arr2[i] = arr1[i];
        
   		     }

  	     
                        printf("The elements in the first array is\n");
      
                   for(i=0; i<n; i++)
        
                     {
          
                        printf("%d", arr1[i]);
      
                     }
	    
                        printf("\n\nThe elements copied into the second array are :\n");
   
                   for(i=0; i<n; i++)
     
                     {
            
                        printf("% 5d", arr2[i]);
      
                     }
	      
 
	         }