#include <stdio.h>
#include <stdlib.h>

int main()
{
   int horai, horaf, media;

   printf ("Hora inicial: ");
   scanf ("%d", &horai);

   printf ("Hora final: ");
   scanf ("%d", &horaf);

   if (horai >= horaf) {
      media = 24 - horai + horaf;
   }
   else {
      media = horaf - horai;
   }

   printf ("O JOGO DUROU %d HORA(S)", media);

    return 0;
}
