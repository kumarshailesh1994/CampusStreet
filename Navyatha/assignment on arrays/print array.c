#include<stdio.h>
void main()
{
int arr[5],i;
printf("enter the 5 numbers\n");
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
}
printf("print the elements");
for(i=0;i<5;i++)
printf("\n%d\t",arr[i]);
}