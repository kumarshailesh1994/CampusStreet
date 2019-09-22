4. write a program in c to print all the unique elements in an array

void main()
{
    int arr1[100], n,ctr=0;
    int i, j, k;
       printf("enter the numbers of elements in array :");
       scanf("%d",&n);
       printf("Input %d elements in the array :\n",n);
       for(i=0;i<n;i++)
            {
	      printf("element-%d : ",i);
	      scanf("%d",&arr1[i]);
	    }
     printf("The unique elements in array are \n");
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
    printf("\n");
}