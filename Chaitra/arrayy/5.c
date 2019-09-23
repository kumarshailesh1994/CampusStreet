/* Program to count the frequency of each element of an array */

#include <stdio.h>
int main()
{
    int arr[50], fre[50],n, i, j, count;
    printf("Enter number of elements of array\n");
    scanf("%d",&n);
   
       printf("enter %d array elements :\n",n);
       for(i=0;i<n;i++)
       {
	    scanf("%d",&arr[i]);
		  fre[i] = -1;
	}
    for(i=0; i<n; i++)
    {
        count = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                fre[j] = 0;
            }
        }

        if(fre[i]!=0)
        {
            fre[i] = count;
        }
    }
    printf("The frequency of all elements of array : \n");
    for(i=0; i<n; i++)
    {
        if(fre[i]!=0)
        {
            printf("%d occurs %d times\n", arr[i], fre[i]);
        }
    }
    return 0;
}