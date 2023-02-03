#include <stdio.h>
#include <stdlib.h>

int main()
{
   int codigo, Alcool, Gasolina, Diesel;

   Alcool = 0;
   Gasolina = 0;
   Diesel = 0;

   while (codigo != 4) {
      printf ("Informe um codigo para (1, 2, 3) ou 4 para parar: ");
      scanf ("%d", &codigo);

      if (codigo == 1) {
         Alcool = Alcool + 1;
      }
      else if (codigo == 2) {
         Gasolina = Gasolina + 1;
      }
      else if (codigo == 3) {
         Diesel = Diesel + 1;
      }
   }

   printf ("MUITO OBRIGADO\n");
   printf ("Alcool: %d\n", Alcool);
   printf ("Gasolina: %d\n", Gasolina);
   printf ("Diesel: %d\n", Diesel);

    return 0;
}
