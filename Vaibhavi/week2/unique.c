#include <stdio.h>
int main()
{
    int arr[10], freq[10];
    int n, i, j,count;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter elements in array: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
        freq[i] = -1;
    }
    for(i=0; i<n; i++)
    {
	count = 1;
        for(j=i+1; j<n; j++)
        {
            if(arr[i] == arr[j])
            {
                count++;
                freq[j] = 0;
            }
        }
  if(freq[i] != 0)
        {
            freq[i] = count;
        }
    }
    printf("Unique elements in the array are: ");
    for(i=0; i<n; i++)
    {
        if(freq[i] == 1)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}

