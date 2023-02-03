#include <stdio.h>
#include <stdlib.h>

int main()
{
   int minutos;
   double valor;

   printf ("Digite a quantidade de minutos: ");
   scanf ("%d", &minutos);

   if (minutos > 100) {
      valor = (minutos - 100) * 2;
      valor = valor + 50;
   }
   else {
      valor = 50;
   }

   printf ("Valor a pagar: R$ %.2lf\n", valor);

    return 0;
}
