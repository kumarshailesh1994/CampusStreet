int a[]={20,20,30,10,5};
int i,j;
for(i=0;i<5;i++)
{
for(j=0;j<i;j++)
{
if(a[i]==a[j])
{
break;
}
if(i==j)
printf("%d",a[i]);
}}
