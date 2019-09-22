2.Write a program in C to copy the elements of one array into another array

#include<stdio.h>
#include<conio.h>
void main(){
  int source[10] = {1,2,3,4,5,6,7,8,9,10};
  int target[10]; int i;
  printf("\n given array is:\n");
     for(i=0; i<10; i++){
	   printf("%d", source[i]);
	 }
	  for(i=0; i<10; i++){
	    target[i] = source[i];
} 
 printf("\n given target array is:\n");
 for(i=0; i<10; i++){
	   printf("%d", target[i]);
	}   
}}

OUTPUT:
source : = 1,2,3,4,5,6,7,8,9,10
target : = 1,2,3,4,5,6,7,8,9,10