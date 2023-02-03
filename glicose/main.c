#include <stdio.h>
#include <stdlib.h>

int main()
{
   int quantidade;

   printf ("Digite a medida da glicose: ");
   scanf ("%d", &quantidade);

   if (quantidade <= 100) {
    printf ("Classificacao: normal");
   }
   else if (quantidade <= 140) {
    printf ("Classificacao: elevado");
   }
   else {
    printf ("Classificacao: diabetes");
   }

    return 0;
}
