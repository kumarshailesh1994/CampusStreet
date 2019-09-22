7.
 #include <stdio.h>
 int main(){
 int arr[] = {1,2,3,4,5};
 int *p = arr;
 ++*p;
 printf("%d",*p);
 return 0;
 }
 output: 2.
