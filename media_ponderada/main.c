#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, loop;
   double x1, x2, x3, media;

   printf ("Quantos casos voce vai digitar? ");
   scanf ("%d", &n);

   for (loop = 1; loop <= n; loop++) {
      printf ("Digite tres numeros:\n");
      scanf ("%lf", &x1);
      scanf ("%lf", &x2);
      scanf ("%lf", &x3);

      x1 = x1 * 2;
      x2 = x2 * 3;
      x3 = x3 * 5;
      media = (x1 + x2 + x3) / 10;

      printf ("MEDIA = %.1lf\n", media);
   }

    return 0;
}
