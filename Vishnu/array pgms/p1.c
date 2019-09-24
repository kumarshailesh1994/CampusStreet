/*1. Write a program in C to store 
elements in an array and print it.*/

#include <stdio.h>
void main()
{
    int array[5];
    int i;
    printf("enter element of an array \n");
    for (i = 0; i < 5; i++)
        scanf("%d", &array[i]);
    printf("Array elements are\n");
    for (i = 0; i <5; i++)
        printf( "%d\n", array[i]) ;
}