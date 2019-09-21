1.	int i,n,arr1[]={10,20,30,40,50};
   printf("The Elements in the array arr2 are:");
   n=sizeof(arr1)/sizeof(arr1[i]);
   int arr2[n];
   for(i=0;i<n;i++)
   {
       arr2[i]=arr1[i];
   }
   for(i=0;i<n;i++)
   {
    printf("\n%d",arr2[i]);
   }
