#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   int N, L, C, loopl, loopc;
   double positivos;

   printf ("Qual a ordem da matriz? ");
   scanf ("%d", &N);

   double mat[N][N];

   positivos = 0;
   for (loopl = 0; loopl < N; loopl++) {
      for (loopc = 0; loopc < N; loopc++) {
         printf ("Elemento [%d,%d]: ", loopl, loopc);
         scanf ("%lf", &mat[loopl][loopc]);
         if (mat[loopl][loopc] > 0) {
            positivos = positivos + mat[loopl][loopc];
         }
      }
   }

   printf ("\nSOMA DOS POSITIVOS: %.1lf\n", positivos);

   printf ("\nEscolha uma linha: ");
   scanf ("%d", &L);
   printf ("LINHA ESCOLHIDA: ");
   for (loopc = 0; loopc < N; loopc++) {
      printf ("%.1lf ", mat[L][loopc]);
   }
   printf ("\n");

   printf ("\nEscolha uma coluna: ");
   scanf ("%d", &C);
   printf ("COLUNA ESCOLHIDA: ");
   for (loopl = 0; loopl < N; loopl++) {
      printf ("%.1lf ", mat[loopl][C]);
   }
   printf ("\n");

   printf ("\nDIAGONAL PRINCIPAL: ");
   for (loopl = 0; loopl < N; loopl++) {
      printf ("%.1lf ", mat[loopl][loopl]);
   }
   printf ("\n");

   printf ("\nMATRIZ ALTERADA:\n");
   for (loopl = 0; loopl < N; loopl++) {
      for (loopc = 0; loopc < N; loopc++) {
         if (mat[loopl][loopc] < 0) {
            mat[loopl][loopc] = pow(mat[loopl][loopc], 2);
            printf ("%.1lf ", mat[loopl][loopc]);
         }
         else {
            printf ("%.1lf ", mat[loopl][loopc]);
         }
      }
      printf ("\n");
   }

    return 0;
}
