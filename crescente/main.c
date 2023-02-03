#include <stdio.h>
#include <stdlib.h>

int main()
{
   int X, Y;

   while (X != Y) {
      printf ("Digite dois numeros:\n");
      scanf ("%d", &X);
      scanf ("%d", &Y);
      if (X > Y) {
         printf ("DECRESCENTE!\n");
      }
      else if (X < Y) {
         printf ("CRESCENTE!\n");
      }
   }

    return 0;
}
