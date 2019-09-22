//3. write a program in c to count a total number of duplicate elements in an array

#include <stdio.h>
int main()
{
	int arr[5], i, j, Count = 0;
    printf("Enter 5 element of an array : \n");
	for (i = 0; i < 5; i++)
	{
    	scanf("%d", &arr[i]);
   	}
	for (i = 0; i < 5; i++)
	{
		for(j = i + 1; j < 5; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
				break;
			}
		}
	}
 	printf("\n Total Number of Duplicate Elements are = %d ", Count);
 	return 0;
}
