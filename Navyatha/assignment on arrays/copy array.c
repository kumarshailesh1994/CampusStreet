#include<stdio.h>
int main()
{
int i,arr1[5]={1,2,3,4,5},arr2[5];
printf("The array1 elements are:\n");
for(i=0;i<5;i++)
printf("%d\t",arr1[i]);
for(i=0;i<5;i++)
{
arr2[i]=arr1[i];
}
printf("\nAfter copying the array2 elemts are:\n");
for(i=0;i<5;i++)
printf("%d\t",arr2[i]);
}
