#include <stdio.h>


int main()
{
  
int a[]={25,12,25};
  
int i,res,x,n=3,k,j;
  
for(i=0;i<n;i++)
    {
   
x=a[i];
     
res=1;
     
for(j=i+1;j<n;j++)
  
    {
        
if(a[j]==x)
 
{
   
res++;
   
for(k=j;k<n;k++)
    
 {
               
a[k]=a[k+1];
           
   }
n--;
              
j--;
    
}

} printf("\n%d occured %d no of times",a[i],res);
 
   }
  
 return 0;

}
