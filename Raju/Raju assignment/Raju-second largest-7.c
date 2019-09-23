#include <stdio.h>

 
int main()
{
	int a[50], i, Size;
	int first, second;
	
	printf("\n Please Enter the Number of elements in an array  :  ");
	scanf("%d", &Size);
	
	printf("\n Please Enter %d elements of an Array \n", Size);
	for (i = 0; i < Size; i++)
	{
		scanf("%d", &a[i]);
    }
	 
	first = second = INT_MIN;  
	   
	for (i = 0; i < Size; i++)
	{
		if(a[i] > first)
		{
			second = first;
			first = a[i];
		}
		else if(a[i] > second && a[i] < first)
		{
			second = a[i];
		}	
	}
	printf("\n The Largest Number in this Array =  %d", first);
	printf("\n The Second Largest Number in this Array =  %d", second);
	
	return 0;
}