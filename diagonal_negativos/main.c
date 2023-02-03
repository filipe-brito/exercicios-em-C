#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, loopl, loopc, negativos;

   printf ("Qual a ordem da matriz? ");
   scanf ("%d", &n);

   int mat[n][n];

   negativos = 0;
   for (loopl = 0; loopl < n; loopl++) {
      for (loopc = 0; loopc < n; loopc++) {
         printf ("Elemento[%d,%d]: ", loopl, loopc);
         scanf ("%d", &mat[loopl][loopc]);
         if (mat[loopl][loopc] < 0) {
            negativos = negativos + 1;
         }
      }
   }

   printf ("DIAGONAL PRINCIPAL:\n");
   for (loopl = 0; loopl < n; loopl++) {
      printf ("%d ", mat[loopl][loopl]);
   }

    return 0;
}
