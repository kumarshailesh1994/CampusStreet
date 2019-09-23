/* print all unique elements in an array*/

#include<stdio.h> 
int main() {
    int arr[100], n, i, j;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d  array elements\n", n);
    for(i = 0; i <n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("Unique Elements are\n");
    for(i = 0; i < n; i++) {
    for (j=0; j<i; j++){
       if (arr[i] == arr[j]){
          break;
	}
    }
    if (i == j){
       printf("%d ", arr[i]);
    }
    }
    return 0;
}
