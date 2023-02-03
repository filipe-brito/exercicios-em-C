#include <stdio.h>
#include <stdlib.h>

int main()
{
   double A, B, C, areaq, areat, areatp;

   printf ("Digite a medida A: ");
   scanf ("%lf", &A);

   printf ("Digite a medida B: ");
   scanf ("%lf", &B);

   printf ("Digite a medida C: ");
   scanf ("%lf", &C);

   areaq = A * A;
   areat = A * B / 2;
   areatp = (A + B) / 2 * C;

   printf ("AREA DO QUADRADO = %.4lf\n", areaq);
   printf ("AREA DO TRIANGULO = %.4lf\n", areat);
   printf ("AREA DO TRAPEZIO = %.4lf\n", areatp);

    return 0;
}
