//3. write a program in c to count a total number of duplicate elements in an array

#include <stdio.h>
void main()
{
        int arr1[100];
	int arr2[100];
	int arr3[100];
        int n,m=1,count=0;
        int i, j;	
	
       printf("enter the number of elements to be stored in the array :");
       scanf("%d",&n);
   
       printf("enter %d elements in the array :\n",n);
       for(i=0;i<n;i++)
        {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }

		for(i=0;i<n; i++)
        {
		arr2[i]=arr1[i];
		arr3[i]=0;
        }

	for(i=0;i<n; i++)
        {
		for(j=0;j<n;j++)
			{
				if(arr1[i]==arr2[j])
				{
				arr3[j]=m;
				m++;
				}
			}
			m=1;
        }		

   for(i=0; i<n; i++)
    {
      if(arr3[i]==2){count++;}  
    }
      printf("total number of duplicate elements found in the array is: %d \n", count);
    
}
