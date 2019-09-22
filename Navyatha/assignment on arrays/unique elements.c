#include<stdio.h>
void main()
{
int a[100],i,j,n,c;
printf("enter the size of array\n");
scanf("%d",&n);
printf("enter elements of array\n");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<n;i++)
{
c=0;
for(j=0;j<n;j++)
{
if(a[i]==a[j])
c++;
}
if(c==1)
printf("%d\t",a[i]);
}
}
