#include <stdio.h>
#include <stdlib.h>

int main()
{
   int codigo, quantidade;
   double valor;

   printf ("Codigo do produto comprado: ");
   scanf ("%d", &codigo);

   printf ("Quantidade comprada: ");
   scanf ("%d", &quantidade);

   if (codigo == 1) {
      valor = quantidade * 5.00;
   }
   else if (codigo == 2) {
      valor = quantidade * 3.50;
   }
   else if (codigo == 3) {
      valor = quantidade * 4.80;
   }
   else if (codigo == 4) {
      valor = quantidade * 8.90;
   }
   else {
      valor = quantidade * 7.32;
   }

   printf ("Valor a pagar: R$ %.2lf\n", valor);

    return 0;
}
