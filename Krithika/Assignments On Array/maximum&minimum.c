6.Write a program in C to find the maximum and minimum element in an array

#include<stdio.h>
main(){
  int array[5] ={2,10,8,30,6,25}, small,large,i;
  for(i=0; i<5; i++){
    scanf("%d", &array[i]);
  }
  small =a[0];
  large =a[0];
  for(i=1; i<5; i++){
  if(a[i]<small){
    small=a[i];
  }
  if(a[i]>large){
    large=a[i];
  }
 }

OUTPUT:
small : 2
large :30