#include <stdio.h>
#include <stdlib.h>

int main()
{
   int M, N, loopl, loopc;

   printf ("Quantas linhas vai ter cada matriz? ");
   scanf ("%d", &M);
   printf ("Quantas colunas vai ter cada matriz? ");
   scanf ("%d", &N);

   int matA[M][N];
   int matB[M][N];
   int matC[M][N];

   printf ("Digite os valores da matriz A:\n");
   for (loopl = 0; loopl < M; loopl++) {
      for (loopc = 0; loopc < N; loopc++) {
         printf ("Elemento [%d,%d]: ", loopl, loopc);
         scanf ("%d", &matA[loopl][loopc]);
      }
   }

   printf ("Digite os valores da matriz B:\n");
   for (loopl = 0; loopl < M; loopl++) {
      for (loopc = 0; loopc < N; loopc++) {
         printf ("Elemento [%d,%d]: ", loopl, loopc);
         scanf ("%d", &matB[loopl][loopc]);
      }
   }

   printf ("MATRIZ SOMA:\n");
   for (loopl = 0; loopl < M; loopl++) {
      for (loopc = 0; loopc < N; loopc++) {
         matC[loopl][loopc] = matA[loopl][loopc] + matB[loopl][loopc];
         printf ("%d ", matC[loopl][loopc]);
      }
      printf ("\n");
   }

    return 0;
}
