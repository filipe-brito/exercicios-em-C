#include <stdio.h>
#include <stdlib.h>

int main()
{
   int M, N, loopl, loopc, soma;

   printf ("Qual a quantidade de linhas da matriz? ");
   scanf ("%d", &M);
   printf ("Qual a quantidade de colunas da matriz? ");
   scanf ("%d", &N);

   double mat[M][N], vet[M];

   for (loopl = 0; loopl < M; loopl++) {
      printf ("Digite os elementos da %da. linha:\n", loopl+1);
      for (loopc = 0; loopc < N; loopc++) {
         scanf ("%lf", &mat[loopl][loopc]);
      }
   }

   printf ("VETOR GERADO:\n");
   for (loopl = 0; loopl < M; loopl++) {
      soma = 0;
      for (loopc = 0; loopc < N; loopc++) {
         soma = soma + mat[loopl][loopc];
      }
      vet[loopl] = soma;
      printf ("%.1lf\n", vet[loopl]);
   }

    return 0;
}
