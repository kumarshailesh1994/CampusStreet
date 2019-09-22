#include<stdio.h> 
int main()
{
 	int i,j,r,c, a[10][10], b[10][10];
 	int Sub[10][10];
 	printf("Enter Number of rows and columns:");
 	scanf("%d %d", &i, &j);
 
 	printf("Enter the First Matrix Elements\n");
 	for(r = 0; r < i; r++)
  	{
   		for(c = 0;c < j;c++)
    	{
      		scanf("%d", &a[r][c]);
    	}
  	}
   printf("Enter the Second Matrix Elements\n");
 	for(r = 0; r < i; r++)
  	{
   		for(c = 0;c < j;c ++)
    	{
      		scanf("%d", &b[r][c]);
    	}
  	}
 	for(r = 0; r < i; r++)
  	{
   		for(c = 0;c < j;c++)
    	{
      		Sub[r][c] = a[r][c] - b[r][c];    
   	 	}
  	}
 
 	printf("After Subtracting Matrix\n ");
 	for(r = 0; r < i; r++)
  	{
   		for(c = 0; c < j; c++)
    	{
      		printf("%d \t ", Sub[r][c]);
    	}
    	printf("\n");
  	}
 	return 0;
}

