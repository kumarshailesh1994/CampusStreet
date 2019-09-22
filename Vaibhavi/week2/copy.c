#include<stdio.h>
	void main()
	{
 int arr1[30], arr2[30];
  	  int i, n;
  	  printf("enter no");
  	  scanf("%d",&n);
  	   printf("enter value present in array1\n");
  for(i=0;i<n;i++)
       {
   scanf("%d",&arr1[i]);
    }
  for(i=0; i<n; i++)
      {      
  arr2[i] = arr1[i];
      }  
 printf("copied to array2 is\n"); 
 for(i=0; i<n; i++)
        {     
    printf("%d\n", arr2[i]); 
}
  }
	    
  
