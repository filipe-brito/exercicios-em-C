#include <stdio.h>
#include <stdlib.h>

int main()
{
   int X, idade;
   double media;

   printf ("Digite as idades:\n");
   scanf ("%d", &idade);

   if (idade < 0) {
      printf ("IMPOSSIVEL CALCULAR");
   }
   else {
      X = 1;
      media = idade;
      while (idade > 0) {
         scanf ("%d", &idade);
         if (idade > 0) {
            X = X + 1;
            media = media + idade;
         }
      }
      media = media / X;

      printf ("MEDIA = %.2lf", media);
   }

    return 0;
}
