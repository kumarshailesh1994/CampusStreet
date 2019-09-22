#include<stdio.h>
void main()
{
int a[5]={1,2,3,4,5},i,max,min;
max=min=a[0];
for(i=1;i<=5;i++)
{
if(a[i]>max)
{
max=a[i];
}
if(a[i]<min)
{
min=a[i];
}
}
printf(" minimum no.= %d",min);
printf(" maximum no.= %d",max);
}
