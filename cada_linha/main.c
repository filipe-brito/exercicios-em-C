#include <stdio.h>
#include <stdlib.h>

int main()
{
   int N, loopl, loopc, maior;

   printf ("Qual a ordem da matriz? ");
   scanf ("%d", &N);

   int mat[N][N];

   for (loopl = 0; loopl < N; loopl++) {
      for (loopc = 0; loopc < N; loopc++) {
         printf ("Elemento [%d,%d]: ", loopl, loopc);
         scanf ("%d", &mat[loopl][loopc]);
      }
   }

   printf ("MAIOR ELEMENTO DE CADA LINHA:\n");
   for (loopl = 0; loopl < N; loopl++) {
      maior = mat[loopl][0];
      for (loopc = 0; loopc < N; loopc++) {
         if (maior < mat[loopl][loopc]) {
            maior = mat[loopl][loopc];
         }
      }
      printf ("%d\n", maior);
   }

    return 0;
}
