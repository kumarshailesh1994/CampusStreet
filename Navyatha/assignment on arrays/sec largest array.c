#include<stdio.h>
void main()
{
int a[50],n,i,b,c;
printf("enter the array size\n");
scanf("%d",&n);
printf("\n enter the elements:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
b=c=a[0];
for(i=1;i<n;i++)
if(b<a[i])
{
c=b;
b=a[i];
}
else if(c<a[i] && a[i]!=b)
{
c=a[i];
}
printf("the second largest element is: %d",c);
}

