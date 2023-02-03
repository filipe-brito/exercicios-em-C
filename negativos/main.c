#include <stdio.h>
#include <stdlib.h>

int main()
{
   int N, loop, x;

   printf ("Quantos numeros voce vai digitar? ");
   scanf ("%d", &N);

   int vet[N];
   for (loop = 0; loop < N; loop++) {
      printf ("Digite um numero: ");
      scanf ("%d", &vet[loop]);
   }

   printf ("NUMEROS NEGATIVOS:\n");
   for (loop = 0; loop < N; loop++) {
      if (vet[loop] < 0) {
         printf ("%d\n", vet[loop]);
      }
   }

    return 0;
}
