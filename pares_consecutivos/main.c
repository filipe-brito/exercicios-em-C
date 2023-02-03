#include <stdio.h>
#include <stdlib.h>

int main()
{
   int X, loop, soma;

   soma = 0;

      printf ("Digite um numero inteiro: ");
      scanf ("%d", &X);

   while (X != 0) {
      soma = 0;
      loop = 0;

      while (loop < 5) {
         if (X % 2 == 0) {
            soma = soma + X;
            X = X + 1;
            loop = loop + 1;
         }
         else {
            X = X + 1;
         }
      }
      printf ("SOMA = %d\n", soma);
      printf ("Digite um numero inteiro: ");
      scanf ("%d", &X);
   }

    return 0;
}
