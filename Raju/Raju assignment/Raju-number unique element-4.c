
 
#include <stdio.h>
 
int main()
{
	int arr[10], FreqArr[10], i, j, count, size;
	
	printf("\n Please Enter Number of elements in an array  :   ");
	scanf("%d", &size);
	
	printf("\n Please Enter %d elements of an Array  :  ", size);
	for (i = 0; i < size; i++)
	{
    	scanf("%d", &arr[i]);
    	FreqArr[i] = -1;
   	}     
 
	for (i = 0; i < size; i++)
	{
		count = 1;
		for(j = i + 1; j < size; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			count++;
    			FreqArr[j] = 0;
    		}
    	}
    	if(FreqArr[i] != 0)
    	{
    		FreqArr[i] = count;
		}
	}

 	printf("\n List of Unique Array Elemnts in this Array are : ");
 	for (i = 0; i < size; i++)
  	{
  		if(FreqArr[i] == 1)
  		{
  			printf("%d\t", arr[i]);
		}		
  	}	     
 	return 0;
}