3. write a program in C to count the total number of duplicate elements in an array.


int main()
{
	int arr[10], i, j, s, Count = 0;
	
	printf(" enter the no. of elements in array :   ");
	scanf("%d", &s);
	
	printf(" Enter  elements of an Array  :  ", s);
	for (i = 0; i < s; i++)
	{
    	scanf("%d", &arr[i]);
   	}     
 
	for (i = 0; i < s; i++)
	{
		for(j = i + 1; j < s; j++)
		{
    		if(arr[i] == arr[j])
    		{
    			Count++;
				break;
			}
		}
	}

 	printf(" number of duplicate elements in array =  %d ", Count);
	     
 	return 0;
}