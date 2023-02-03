#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
   double a, b, c, X1, X2, delta;

   printf ("Coeficiente a: ");
   scanf ("%lf", &a);

   printf ("Coeficiente b: ");
   scanf ("%lf", &b);

   printf ("Coeficiente c: ");
   scanf ("%lf", &c);

   delta = (b * b) - 4 * a * c;

   if (delta > 0) {
      X1 = (-b + sqrt(delta)) / (2 * a);
      X2 = (-b - sqrt(delta)) / (2 * a);
      printf ("X1 = %.4lf\n", X1);
      printf ("X2 = %.4lf\n", X2);
   }
   else {
    printf ("Esta equacao nao possui raizes reais\n");
   }
    return 0;
}
