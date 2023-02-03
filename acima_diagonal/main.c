#include <stdio.h>
#include <stdlib.h>

int main()
{
   int N, loopl, loopc, soma;

   printf ("Qual a ordem da matriz? ");
   scanf ("%d", &N);

   int mat[N][N];

   for (loopl = 0; loopl < N; loopl++) {
      for (loopc = 0; loopc < N; loopc++) {
         printf ("Elemento [%d,%d]: ", loopl, loopc);
         scanf ("%d", &mat[loopl][loopc]);
      }
   }

   soma = 0;
   for (loopl = 0; loopl < N; loopl++) {
      for (loopc = loopl+1; loopc < N; loopc++) {
         soma = soma + mat[loopl][loopc];
      }
   }

   printf ("SOMA DOS ELEMENTOS ACIMA DA DIAGONAL PRINCIPAL = %d", soma);

    return 0;
}
