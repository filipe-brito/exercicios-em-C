#include <stdio.h>
#include <stdlib.h>

int main()
{
   int N, loop;
   double media, soma;

   printf ("Quantos numeros voce vai digitar? ");
   scanf ("%d", &N);

   double vet[N];
   for (loop = 0; loop < N; loop++) {
      printf ("Digite um numero: ");
      scanf ("%lf", &vet[loop]);
   }

   printf ("\nVALORES = ");

   for (loop = 0; loop < N; loop++) {
      printf ("%.1lf ", vet[loop]);
      soma = soma + vet[loop];
      media = media + 1;
   }
   printf ("\n");

   media = soma / media;
   printf ("SOMA = %.2lf\n", soma);
   printf ("MEDIA = %.2lf\n", media);

    return 0;
}
