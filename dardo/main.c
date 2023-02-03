#include <stdio.h>
#include <stdlib.h>

int main()
{
   double x1, x2, x3, maior;

   printf ("Digite as tres distancias: \n");
   scanf ("%lf", &x1);
   scanf ("%lf", &x2);
   scanf ("%lf", &x3);

   if (x1 > x2 && x1 > x3) {
      maior = x1;
   }
   else if (x2 > x3) {
      maior = x2;
   }
   else {
      maior = x3;
   }

   printf ("MAIOR DISTANCIA = %.2lf\n", maior);

    return 0;
}
