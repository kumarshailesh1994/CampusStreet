

3.Write a program in C to count a total number of duplicate elements in an array

#include <stdio.h>
 
int main () {

   int m[ 10 ]; /* n is an array of 10 integers */
   int i,j;
 
   //Duplicate element count
   char name[] = "ggkjiiklepodsejo";
   for (int i = 0 ; i<= sizeof(name); i++){
       for (int j = i+1; j< sizeof(name); j++){
           if(name[i]== name[j]){
               printf("Duplicate elements are \n" );
               printf("%c \n", name[j]);
           }
       }
   }
   
 
   return 0;
}

OUTPUT:

Duplicate elements are 
g 
Duplicate elements are 
k 
Duplicate elements are 
j 
Duplicate elements are 
i 
Duplicate elements are 
e 
Duplicate elements are 
o 
