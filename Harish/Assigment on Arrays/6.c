6. write a program in C to find the maximum and minimum element in an array

void main()
{
    int arr1[100];
    int i, max, min, n;
       printf("enter the number of element stored in array :");
       scanf("%d",&n);
   
       printf("Enter %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element - %d : ",i);
	      scanf("%d",&arr1[i]);
	    }
    max = arr1[0];
    min = arr1[0];

    for(i=1; i<n; i++)
    {
        if(arr1[i]>max)
        {
            max = arr1[i];
        }
        if(arr1[i]<mn)
        {
            min = arr1[i];
        }
    }
    printf("Maximum element is : %d\n", max);
    printf("Minimum element is : %d\n\n", min);
}
