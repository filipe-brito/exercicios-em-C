#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, fatorial, loop;

   printf ("Digite o valor de N: ");
   scanf ("%d", &n);

   if (n == 0) {
      fatorial = 1;
   }
   else {
      fatorial = n;
      for (loop = n-1; loop >= 1;) {
         fatorial = fatorial * loop;
         loop = loop - 1;
   }
   }

   printf ("FATORIAL = %d\n", fatorial);

    return 0;
}
