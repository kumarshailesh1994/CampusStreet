#include<stdio.h>
int main()
{
int arr[10]={1,2,2,1,4,4,5,6,9,9},i,j=0,count=0;

for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(arr[i]==arr[j])
{
count++;
}
}
}
printf(" Total duplicate elemnts are %d",count);
}

