#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, x, loop, dentro, fora;

   printf ("Quantos numeros voce vai digitar? ");
   scanf ("%d", &n);

   dentro = 0;
   fora = 0;

   for (loop = 1; loop <= n; loop++) {
      printf ("Digite um numero: ");
      scanf ("%d", &x);
      if (x >= 10 && x <= 20) {
         dentro = dentro + 1;
      }
      else {
         fora = fora + 1;
      }
   }

   printf ("%d DENTRO\n", dentro);
   printf ("%d FORA\n", fora);

    return 0;
}
