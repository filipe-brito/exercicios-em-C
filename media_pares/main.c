#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, loop, pares;
   double media;

   printf ("Quantos elementos vai ter o vetor? ");
   scanf ("%d", &n);

   int vet[n];

   pares = 0;
   for (loop = 0; loop < n; loop++) {
      printf ("Digite um numero: ");
      scanf ("%d", &vet[loop]);
      if (vet[loop] % 2 == 0) {
         pares = pares + 1;
      }
   }

   if (pares == 0) {
      printf ("NENHUM NUMERO PAR");
   }
   else {
      media = 0;
      for (loop = 0; loop < n; loop++) {
         if (vet[loop] % 2 == 0) {
            media = media + vet[loop];
         }
      }

      media = media / pares;
      printf ("MEDIA DOS PARES = %.1lf", media);
    }

    return 0;
}
