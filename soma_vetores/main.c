#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, loop;

   printf ("Quantos valores vai ter cada vetor? ");
   scanf ("%d", &n);

   int a[n];

   printf ("Digite os valores do vetor A:\n");
   for (int loop = 0; loop < n; loop++) {
      scanf ("%d", &a[loop]);
   }

   int b[n];

   printf ("Digite os valores do vetor B:\n");
   for (int loop = 0; loop < n; loop++) {
      scanf ("%d", &b[loop]);
   }

   int c[n];

   printf ("VETOR RESULTANTE:\n");
   for (loop = 0; loop < n; loop++) {
      c[loop] = a[loop] + b[loop];
      printf ("%d\n", c[loop]);
   }

    return 0;
}

