#include <stdio.h> 
int main()
{
   int m, n, c, d, a[10][10], b[10][10], s[10][10];
   printf("number of rows and columns of matrix\n");
   scanf("%d%d", &m, &n);
   printf("elements of first matrix\n");
   for (c = 0; c < m; c++)
      for (d = 0; d < n; d++)
         scanf("%d", &a[c][d]);
   printf("elements of second matrix\n");
   for (c = 0; c < m; c++)
      for (d = 0 ; d < n; d++)
         scanf("%d", &b[c][d]);
   printf("Sum of matrices:-\n");
   for (c = 0; c < m; c++) {
      for (d = 0 ; d < n; d++) {
         s[c][d] = a[c][d] + b[c][d];
         printf("%d\t", s[c][d]);
      }
      printf("\n");
   }
   return 0;
   }

