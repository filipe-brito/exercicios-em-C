#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, loop, r;

   printf ("Deseja a tabuada para qual valor? ");
   scanf ("%d", &n);

   for (loop = 1; loop <= 10; loop++) {
      r = n * loop;
      printf ("%d X %d = %d\n", n, loop, r);
   }

    return 0;
}
