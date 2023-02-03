#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x ,y, loop, soma;

   printf ("Digite dois numeros:\n");
   scanf ("%d", &x);
   scanf ("%d", &y);

   soma = 0;
   loop = 0;

   if (x >= y) {
      for (loop = y+1; loop <= x-1; loop++) {
         if (loop % 2 != 0) {
            soma = soma + loop;
         }
      }
   }
   else {
      for (loop = x+1; loop <= y-1; loop++) {
         if (loop % 2 != 0) {
            soma = soma + loop;
         }
      }
   }

   printf ("SOMA IMPARES = %d\n", soma);

    return 0;
}
