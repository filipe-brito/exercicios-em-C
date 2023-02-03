#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, x1, x2, loop;
   double r;

   printf ("Quantos casos voce vai digitar? ");
   scanf ("%d", &n);

   for (loop = 1; loop <= n; loop++) {
      printf ("Entre com o numerador: ");
      scanf ("%d", &x1);
      printf ("Entre com o denominador: ");
      scanf ("%d", &x2);

      if (x1 < 0) {
         printf ("DIVISAO IMPOSSIVEL\n");
      }
      else {
         r = (double) x1 / x2;
         printf ("DIVISAO = %.2lf\n", r);
      }
   }

    return 0;
}
