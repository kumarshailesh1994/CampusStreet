#include<stdio.h>
void main()
{
int a[3],i,j,c;
printf("enter 3 elements into the array\n");
for(i=0;i<3;i++)
scanf("%d",&a[i]);
for(i=0;i<3;i++)
{
printf("element- [%d]=%d\n",i,a[i]);
}
for(i=0;i<3;i++)
{
c=0;
for(j=0;j<3;j++)
{
if(a[i]==a[j])
c++;
}
printf("%d occurs %d times\n",a[i],c);
}
}




