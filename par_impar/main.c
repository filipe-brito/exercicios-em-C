#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, x, loop;

   printf ("Quantos numeros voce vai digitar? ");
   scanf ("%d", &n);

   for (loop = 1; loop <= n; loop++) {
      printf ("Digite um numero: ");
      scanf ("%d", &x);

      if (x == 0) {
        printf ("NULO\n");
      }
      else if (x % 2 == 0) {
         if (x > 0) {
            printf ("PAR POSITIVO\n");
         }
         else {
            printf ("PAR NEGATIVO\n");
         }
      }
      else {
         if (x < 0) {
            printf ("IMPAR NEGATIVO\n");
         }
         else {
            printf ("IMPAR POSITIVO\n");
         }
      }
   }

    return 0;
}
