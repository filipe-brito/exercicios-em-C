#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x, loop;

   printf ("Digite o valor de X: ");
   scanf ("%d", &x);

   for (loop = 1; loop <= x; loop++) {
      if (loop % 2 != 0) {
         printf ("%d\n", loop);
      }
   }

    return 0;
}
