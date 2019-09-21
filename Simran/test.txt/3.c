
   

3.number of duplicate elements

	#include <stdio.h>
	#define MAX_SIZE 100 

	int main()
	{
    	 int arr[MAX_SIZE];
    	 int i, j, size, count = 0;

   
    	 printf("Enter size of the array : ");
    	 scanf("%d", &size);
	 printf("Enter elements in array : ");
    	 for(i=0; i<size; i++)
   	   {
       	      scanf("%d", &arr[i]);
    	   }

   	 for(i=0; i<size; i++)
    	  {
       	    for(j=i+1; j<size; j++)
             {
             
                if(arr[i] == arr[j])
                  {
                    count++;
                    break;
                  }
             }
          }

         printf("Total number of duplicate elements = %d", count);
         return 0;
	 }