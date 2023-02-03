#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, loop;
   double media;

   printf ("Quantos elementos vai ter o vetor? ");
   scanf ("%d", &n);

   double vet[n];

   media = 0;
   for (loop = 0; loop < n; loop++) {
      printf ("Digite um numero: ");
      scanf ("%lf", &vet[loop]);
      media = media + vet[loop];
   }

   media = media / n;
   printf ("\nMEDIA DO VETOR = %.3lf\n", media);

   printf ("ELEMENTOS ABAIXO DA MEDIA:\n");
   for (loop = 0; loop < n; loop++) {
      if (vet[loop] < media) {
         printf ("%.1lf\n", vet[loop]);
      }
   }

    return 0;
}
