#include<stdio.h>
void main()
{
int a[100][100],b[100][100],c[100][100],i,j,n;
printf("enter array size\n");
scanf("%d",&n);
printf(" enter elements for matrix 1\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
scanf("%d",&a[i][j]);
}
printf("matrix 1\n");
for(i=0;i<n;i++)
{
printf("\n");
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n\n");
}

printf(" enter elements for matrix 2\n");
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
scanf("%d",&b[i][j]);
}
printf("matrix 2\n");
for(i=0;i<n;i++)
{
printf("\n");
for(j=0;j<n;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n\n");
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
c[i][j]=a[i][j]-b[i][j];
}
}
printf("multiplication matrix\n");
for(i=0;i<n;i++)
{
printf("\n");
for(j=0;j<n;j++)
{
printf("%d\t",c[i][j]);
}
printf("\n\n");
}
}