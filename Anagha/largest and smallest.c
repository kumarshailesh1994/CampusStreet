int a[]={10,5,30,40,50};
int i,j,large,small;
large=a[0];
small=a[0];
for(i=0;i<5;i++)
{
if(a[i]>large)
{
    large=a[i];
}    

if(a[i]<small)
{
    small=a[i];
}

}
printf("\nLargest: %d",large);
printf("\nSmallest %d",small);
