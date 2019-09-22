#include<stdio.h>
void main()
{
int arr[3][3],i,j;
printf("enter matrix for 3*3:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
scanf("%d",&arr[i][j]);
}
}
printf("matrix is:\n");
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
{
printf("%d\t",arr[i][j]);
}
printf("\n\n");
}
}

