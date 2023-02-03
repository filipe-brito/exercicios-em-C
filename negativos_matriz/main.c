#include <stdio.h>
#include <stdlib.h>

int main()
{
   int M, N, loopl, loopc;

   printf ("Qual a quantidade de linhas da matriz? ");
   scanf ("%d", &M);
   printf ("Qual a quantidade de colunas da matriz? ");
   scanf ("%d", &N);

   int mat[M][N];

   for (loopl = 0; loopl < M; loopl++) {
      for (loopc = 0; loopc < N; loopc++) {
         printf ("Elemento [%d,%d]: ", loopl, loopc);
         scanf ("%d", &mat[loopl][loopc]);
      }
   }

   printf ("VALORES NEGATIVOS:\n");
   for (loopl = 0; loopl < M; loopl++) {
      for (loopc = 0; loopc < N; loopc++) {
         if (mat[loopl][loopc] < 0) {
            printf ("%d\n", mat[loopl][loopc]);
         }
      }
   }

    return 0;
}
