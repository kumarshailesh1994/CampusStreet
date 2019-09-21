#include <stdio.h>

int main()
{
    int a[]={20,50,10,23,5,8};
int frst_lar=a[0];
int sec_lar=a[1];int temp,i;
if(sec_lar>frst_lar)
{
temp=sec_lar;
sec_lar=frst_lar;
frst_lar=temp;
}
for(i=2;i<6;i++)

{
if(a[i]>frst_lar)
{
sec_lar=frst_lar;
frst_lar=a[i];
}
else if(a[i]>sec_lar)
{
sec_lar=a[i];
}}
printf("First Largest is %d",frst_lar);
printf("Second largest is %d",sec_lar);
