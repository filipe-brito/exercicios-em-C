#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, loop, posicao;
   double maior;

   printf ("Quantos numeros voce vai digitar? ");
   scanf ("%d", &n);

   double vet[n];

   for (loop = 0; loop < n; loop++) {
      printf ("Digite um numero: ");
      scanf ("%lf", &vet[loop]);
   }

   for (loop = 0; loop < n; loop++) {
      if (vet[loop-1] > vet[loop+1]) {
         maior = vet[loop-1];
         posicao = loop-1;
      }
   }

   printf ("\nMAIOR VALOR = %.1lf\n", maior);
   printf ("POSICAO DO MAIOR VALOR = %d\n", posicao);

    return 0;
}
